#include<iostream>
#include<cstdlib>
using namespace std;

class Node
{
    public:
    int info;
    Node*ptr;
};

class stack
{
    private:
    Node* top;
    Node* temp;
    int count;

    public:
    stack()
    {
        top = NULL;
        count = 0;
    }

 //Push operation
   void push(int data)
   {
     if(top==NULL)
     {
        top = new Node();
        top->info=data;
        top->ptr = NULL;
     }
     else
     {
        temp = new Node();
        temp->info = data;
        temp->ptr = top;
        top = temp;
     }
     count++;
     cout<<"Value Pushed succesfully in Stack " <<data<<endl;
    }

 //Pop operation
 void pop()
 {
    if(top==NULL)
    {
        cout<<"Stack is Empty " <<endl;
        return;
    }
    else
    {
        cout<<"Popped Value " <<top->info<<endl;
        Node* del = top;
        top = top->ptr;
        delete del;
        count--;
    }
 }

 //Peek Opertion(Return Top Element)

  int topElement()
  {
    if(top!=NULL)
    {
        return top->info;
    }
    else
    {
        cout<<"Stack is Empty " <<endl;
        return -1;
    }
  }

 //Display

 void display()
 {
    if(top==NULL)
    {
        cout<<"Stack is Empty " <<endl;
    }
    else
    {
        Node* tempNode = top;
        cout<<"Stack elements: ";
        while(tempNode!=NULL)
        {
            cout<<tempNode->info<<" ";
            tempNode = tempNode->ptr;
        }
        cout<<endl;
    }
 }

 //Empty

 void Empty()
 {
    if(top==NULL)
    {
        cout<<"Stack is Empty "<<endl;
    }
    else
    {
        cout<<"Stack is not empty with "<<count<<"values"<<endl;;
    }
 }

 //Count

 void stackcount()
 {
    cout<<"Number of Elments in stack : "<<count<<endl;
 }

 //Destroy

 void destroy()
 {
    while(top!=NULL)
    {
        temp = top;
        top = top->ptr;
        delete temp;
    }
    cout<<"All elements are deleted " <<endl;
    count = 0;
 }

};

int main()
{
    stack stack;
    int choice,no;

    do
    {
        cout<<"1: Push"<<endl;
        cout<<"2: Pop"<<endl;
        cout<<"3: Top"<<endl;
        cout<<"4: Empty"<<endl;
        cout<<"5: Exit"<<endl;
        cout<<"6: Display"<<endl;
        cout<<"7: Stack Count"<<endl;
        cout<<"8: Destroy stack"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
              cout<<"Enter elements: ";
              cin >> no;
              stack.push(no);
              break;

            case 2:
               stack.pop();
               break;
               
               
            case 3:
            {
                int topElement = stack.topElement();
                if(topElement!=-1)
                  cout<<"Top Element: "<<topElement<<endl;
                  break;
            }

            case 4:
              stack.Empty();
              break;

            case 5:
            cout<<"Exiting..."<<endl;
            exit(0);
            break;
            
            case 6:
              stack.display();
              break;

            case 7:
              stack.stackcount();
              break;

            case 8:
              stack.destroy();
              break;
              
            default:
            cout<<"Wrong choice,try again "<<endl;  
        }
    } 
    
    while (true);
    return 0;
    
}
