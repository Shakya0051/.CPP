#include<iostream>
using namespace std;

class Node
{
     public:
     Node* prev;
     int data;
     Node* next;

     Node(int value = 0)
     {
        data  = value;
        prev = NULL;
        next = NULL;
     }
};

class DoublyLinklist
{
    public:
     Node*head;
     DoublyLinklist()
     {
        head = NULL;
     }


     // Function to insert at First

     void insertAtfirst(int value)
     {
        Node* newNode = new Node(value);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout<<"Node Insert at first "<<endl;
     }

     //Insert at last

     void insertAtlast(int value)
     {
        Node* newNode = new Node(value);
        if(head==NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
        cout<<"Node insert at last "<<endl;
     }

     //Insert at position
    
     void insertAtposition(int value, int pos)
     {
        Node* newNode = new Node(value);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            for(int i=0; i<pos; i++)
            {
                if(temp==NULL)
                {
                    cout<<"Out of Range "<<endl;
                    return;
                }
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        cout<<"Node Insert at position "<<endl;

     }

     //delete first
     void deletefirst()
     {
        if(head==NULL)
        {
            cout<<"List is empty "<<endl;
        }
        else if(head->next==NULL)
        {
            delete head;
            head = NULL;
            cout<<"Only one Node"<<endl;
        }
        else
        {
            Node* temp = head;
            head = temp->next;
            head->next->prev = NULL;
            delete temp;
            cout<<"First Node is deleted "<<endl;
        }
     }

     //Delete last

     void deletelast()
     {
        if (head==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if(head->next==NULL)
        {
            delete head;
            head = NULL;
            cout<<"Only one Node in list"<<endl;
        }
        else
        {
           Node* temp = head;
           while(temp->next!=NULL)
           {
            temp = temp->next;
           }
           temp->prev->next = NULL;
           delete temp;
           cout<<"Last element is deleted "<<endl;
        }
     }

     //delete at position

     void deleteAtposition( int pos)
     {
        if(head == NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else if(head->next==NULL)
        {
            delete head;
            head == NULL;
            cout<<"Only one Node in List "<<endl;
        }
        else if (pos == 1)
        {
            deletefirst();
            return;
        }
        else
        {
            Node* temp = head;
            Node* p = NULL;
            for( int i=1; i<pos; i++)
            {
                if(temp == NULL)
                {
                    cout<<"Out of Range"<<endl;
                    return;
                }
                p = temp;
                temp = temp->next;
            }
            p->next = temp->next;
            if(temp->next!= NULL)
            {
               temp->next->prev = p;
            }
            delete temp;
            cout<<"Node delete at position "<<endl;  
        }
     }

     //search

     void search(int value)
     {
        int i=1;
        if(head == NULL)
        {
            cout<<"List is Empty"<<endl;
        }
        else 
        {
            Node* temp = head;
            while (temp!=NULL)
            {
                if(temp->data==value)
                {
                    cout<<"Value is found at position : "<<i<<endl;
                    return;
                }
                temp = temp->next;
                i++;
            }

            cout<<"value is not found "<<endl;
            
        }
     }

     //count

     void count()
     {
        Node* temp = head;
        int c = 0;
        while(temp!=NULL)
        {
            c++;
            temp= temp->next;
        }
        cout<<"Total no of Node is : "<<c<<endl;
     }

     //Update list

     void updatelist(int index, int value)
     {
        if(head==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else
        {
            Node* temp = head;
            int c = 0;
            while(temp!=NULL)
            {
                if(c==index)
                {
                    temp->data=value;
                    return;
                }
                temp = temp->next;
                c++;
            }
            cout<<"Record is Updated"<<endl;
        }
     }

     //display
     void display()
     {
        if(head==NULL)
        {
            cout<<"List is empty "<<endl;
        }
        else
        {
            Node* temp= head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"-->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
     }
};

//Main function

int main()
{
    DoublyLinklist obj;
    int choice , value, pos;

    do
    {
        cout<<"1. Insert At first "<<endl;
        cout<<"2. Insert At Last "<<endl;
        cout<<"3. Insert at Position "<<endl;
        cout<<"4. Delete at first "<<endl;
        cout<<"5. Delete at Last "<<endl;
        cout<<"6. Delete at Position "<<endl;
        cout<<"7. Search "<<endl; 
        cout<<"8. Count Nodes "<<endl;
        cout<<"9. Update List "<<endl; 
        cout<<"10. Display "<<endl;
        cout<<"11. Exit\n";
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
            cout<<"Enter value : ";
            cin >> value;
            cout<<"Enter position : ";
            cin >> pos;
            obj.insertAtposition(value,pos);
            break;

            case 4:
            obj.deletefirst();
            break;

            case 5:
            obj.deletelast();
            break;

            case 6:
            cout<<"Enter Position: ";
            cin >> pos;
            obj.deleteAtposition(pos);
            break;
            
            case 7:
            cout<<"Enter value to be search : ";
            cin >> value;
            obj.search(value);
            break;

            case 8:
            obj.count();
            break;

            case 9:
            cout<<"Enter Index Number : ";
            cin >> index;
            cout<<"Enter value : ";
            cin >> value ;
            obj.updatelist( index,value);
            break;

            case 10:
            obj.display();
            break;


            case 11:
                cout << "Exiting...\n";
                return 0;
        }
    } while(choice!=30); 
    
}