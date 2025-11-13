#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};

class Queue
{
    public :
    Node* front;
    Node* rear;

    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    //Enqueue or insert the element at Rear
    void insert()
    {
        Node* ptr = new Node();
        cout<<"Enter Value : " ;
        int item;
        cin>>item;
        ptr->data = item;
        ptr->next = NULL;
        if(front == NULL)
        {
            front = rear = ptr;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
        }
        cout<<"Element inserted successfully " <<endl;
    }

    //Dequeue or delete at front
    void delete1()
    {
        if(front==NULL)
        {
            cout<<"UNDERFLOW"<<endl;
        }
        else
        {
            Node* ptr = front;
            front = front->next;
            cout<<"Deleted value : " <<ptr->data<<endl;
            delete ptr;

            if(front==NULL)
            {
                rear = NULL;
            }
        }
    }

    //display
    void display()
    {
        if(front == NULL)
        {
            cout<<"Empty Queue " <<endl;
        }
        else
        {
            cout<<"Printing values...."<<endl;
            Node* ptr = front;
            while(ptr!=NULL)
            {
                cout<<ptr->data<<"\t";
                ptr = ptr->next;
            }
            cout<<endl;
        }
    }
};

int main()
{
    Queue queue;
    int choice=0;

    while(choice!=6)
    {
        cout<<"1. Enqueue "<<endl;
        cout<<"2. Dequeue "<<endl;
        cout<<"3. Display "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
           case 1:
             queue.insert();
             break;
            
           case 2:
              queue.delete1();
              break;
              
            case 3:
               queue.display();
               break;
               
            case 4:
              cout<<"Exiting....."<<endl;
              exit(0);
              break;
              
            
        }
    }
}