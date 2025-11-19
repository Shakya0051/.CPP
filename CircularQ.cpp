#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

class CircularQueue
{
    public:
    Node* front;
    Node* rear;

    CircularQueue()
    {
        front = NULL;
        rear = NULL;
    }

    //Insert or Enqueue value in queue
    void insert(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        if(rear == NULL)
        {
            front = rear = newNode;
            rear->next = front;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;

        }
        cout<<"Value inserted in Queue "<<endl;
    }

    //Dequeue or delete value in queue

    void delete1()
    {
        if(front == NULL)
        {
            cout<<"Queue is empty "<<endl;
        }
        else if(front == rear)
        {
            delete front;
            front = NULL;
            rear = NULL;
        }
        else
        {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
        cout<<"value deleted in Queue "<<endl;
    }

    //display
    void display()
    {
        if(front == NULL)
        {
            cout<<"Queue is empty "<<endl;
        }
        else
        {
            Node* temp = front;
            while(temp->next!=front)
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
    CircularQueue obj;
    int choice, value;

    do
    {
        cout<<"1. Insert "<<endl;
        cout<<"2. Delete "<<endl;
        cout<<"3. Display "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Enter value : ";
            cin>>value;
            obj.insert(value);
            break;

            case 2:
            obj.delete1();
            break;

            case 3:
            obj.display();
            break;
        }
    } 
    while (choice!=5);
    return 0;
    
}