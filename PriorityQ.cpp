#include<iostream>
#include<cstdlib>
using namespace std;

class Node
{
    public:
    int data;
    int priority;
    Node* next;
};

class PriorityQueue
{
    private:
    Node* start;

    public: 
    
    PriorityQueue()
    {
        start = NULL;
    }

    // Insert a element
    void insert()
    {
        int val,pri;
        cout<<"Enter the value and its priority : ";
        cin >> val >> pri;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->priority = pri;
        newNode->next = NULL;

        if(start == NULL || pri<start->priority)
        {
            newNode->next = start;
            start = newNode;
        }
        else
        {
            Node* p = start;
            while(p->next!=NULL&&p->next->priority<=pri)
            {
                p=p->next;
            }
            newNode->next = p->next;
            p->next = newNode;
        }
    }

    //Delete the element

    void delete1()
    {    Node* data;
        if(start== NULL)
        {
            cout<<"UNDERFLOW"<<endl;
        }
        else
        {
            cout<<"Deleted item is: "<start->data<<endl;
            Node* temp = start;
            start = start->next;
            delete temp;
        }
    }

    //display
    void display()
    {
         if(start==NULL)
         {
            cout<<"Queue is Empty "<<endl;
         }
         else
         {
            Node* temp = start;
            while(temp->next!=start)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<temp->data<<endl;
         }
    }
};

int main()
{
    PriorityQueue obj;
    int choice;

    do
    {
        cout<<"1. Insert "<<endl;
        cout<<"2. Delete "<<endl;
        cout<<"3. Display "<<endl;
        cout<<"Enter your choice :";
        cin >> choice;

        switch(choice)
        {
            case 1:
            obj.insert();
            break;

            case 2:
            obj.delete1();
            break;

            case 3:
            obj.display();
            break;
        }
    }
     while (choice!=9);
     return 0;
    
}