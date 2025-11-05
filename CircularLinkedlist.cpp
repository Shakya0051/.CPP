#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

};

class CircularLinkedlist
{
      public:
      Node* head;

     CircularLinkedlist()
     {
        head = NULL;
     } 

   
 //Insert at first
 
 void insertAtfirst(int value)
 {
     Node* newNode = new Node();
     newNode->data = value;
     if(head == NULL)
     {
        head = newNode;
        head->next = head;
     }
     else if(head->next ==head)
     {
         newNode->next = head;
         head->next = newNode;
         head = newNode;
     }
     else
     {
        Node* temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        newNode->next = head;
        head = newNode;
        temp->next = newNode;
     }
     cout<<"Node insert at first"<<endl;
 }

 //insert at last

 void insertAtlast(int value)
 {
     Node* newNode = new Node();
     newNode->data = value;
     if(head == NULL)
     {
        head = newNode;
        newNode->next = head;
     }
     else if(head->next == head)
     {
        newNode->next = head;
        head->next = newNode;
     }
     else
     {
        Node* temp = head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
     }
     cout<<"Node insert at last "<<endl;
 }

//Insert at position

void insertAtposition(int pos, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    if(head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else if(pos==1)
    {
        insertAtfirst(value);
        return;
    }
    else
    {
        Node* temp = head;
        for(int i=1; i<pos; i++)
        {
            if(temp->next==head)
            {
                cout<<"Out of range"<<endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout<<"Node insert at position "<<endl;
}

//Delete at first

void deleteAtfirst()
{
    if(head==NULL)
    {
        cout<<"List is empty "<<endl;
    }
    else if(head->next == head)
    {
         delete head;
         head == NULL;
         cout<<"Only one node in list "<<endl;
    }
    else
    {
        Node* delNode = head;
        Node* temp = head;
        while(temp->next!=head)
        {
            temp= temp->next;
        }
        head = head->next;
        temp->next =head;
        delete delNode;
        cout<<"First node is deleted "<<endl;
    }
}


//Display

void display()
{
    if (head == NULL)
    {
        cout<<"List is Empty "<<endl;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=head)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
}

};



int main()
{
    CircularLinkedlist obj;
    int choice, value , pos;

    do
    {
        cout<<"1. Insert at first "<<endl;
        cout<<"2. Insert at last "<<endl;
        cout<<"3. Insert at position "<<endl;
        cout<<"4. Delete at first "<<endl;
        cout<<"5. Display "<<endl;
        cout<<"Enter Your Choice : ";
        cin >> choice;
     
        switch(choice)
        {
            case 1:
              cout<<"Enter Value : ";
              cin >> value;
              obj.insertAtfirst(value);
              break;

            case 2:
              cout<<"Enter Value : ";
              cin >> value;
              obj.insertAtlast(value);
              break; 
              
            case 3:
              cout<<"Enter position : ";
              cin >> pos;
              cout<<"Enter value : ";
              cin >> value;
              obj.insertAtposition(pos,value);
              break;
              
            case 4:
              obj.deleteAtfirst();
              break; 

            case 5:
              obj.display();
              break;  
        }

    } while (choice!=30);
    
    
}



