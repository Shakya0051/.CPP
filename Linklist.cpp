#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Head pointer
Node* head = NULL;

// Function to insert at the beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at the beginning.\n";
}

// Function to insert at the end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted " << value << " at the end.\n";
}

// Function to insert at a specific position
void insertAtPosition(int value, int position) {
    Node* newNode = new Node();
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at position " << position << ".\n";
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range.\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted " << value << " at position " << position << ".\n";
}

//delete first
void deletefirst()
{
    if(head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        Node*temp = head;
        head = head->next;
        delete temp;
        cout<<"First node is deleted"<<endl;
    }
}

//delete last
void deletelast()
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else if(head->next == NULL)
    {
       delete head;
       head = NULL;
       cout<<"Only one node in list"<<endl; 
    }
    else
    {
        Node*temp = head;
        Node*prev = NULL;
        while(temp->next!= NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
        cout<<"Last node is deleted"<<endl;
    }
}

//delete at position

void deleteAtposition(int position)
{
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
        cout<<"Only one Node"<<endl;
    }
    else
    {
      Node*temp = head;
      for(int i = 0; i< position;i++)
      {
        if (temp == NULL)
        {
            cout<<"Out of Range"<<endl;
            return;
        }
        temp = temp->next;
      }
      Node*delNode = temp->next;
      if(delNode == NULL)
      {
        cout<<"No Node is Exist"<<endl;
      }
      temp->next=delNode->next;
      delete delNode;
      cout<<"Node delete at position"<<endl;
    }
}

//Search

void search(int value)
{
    Node*temp = head;
    bool f = false;
    int i = 0;

    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            cout<<"Record found at Position : "<<(i+1)<<endl;
            f = true;
            break;
        }
        temp=temp->next;
        i++;
    }
    if(!f)
    {
        cout<<"Record not found"<<endl;
    }
}

// Function to display the linked list
void display() {
    Node* temp = head;
    if (temp == NULL) {
        cout << "List is empty.\n";
        return;
    }

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    int choice, value, position;

    while (true) {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Any Position\n";
        cout << "4. Delete at first\n";
        cout << "5. Delete at Last\n";
        cout << "6. Delete at position\n";
        cout << "7. Search\n";
        cout << "8. Display\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 3:
                cout << "Enter value and position: ";
                cin >> value >> position;
                insertAtPosition(value, position);
                break;
            
            case 4:
                 deletefirst();
                 break;
                 
            case 5:
                 deletelast();
                 break;
                 
            case 6:
                cout<<"Enter Position:";
                cin>> position;
                deleteAtposition(position);
                break;  
                
            case 7:
               cout<<"Enter Value : ";
               cin >> value;
               search(value);
               break;    


            case 8:
                display();
                break;

            case 9:
                cout << "Exiting...\n";
                return 0;
               

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
