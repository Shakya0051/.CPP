#include<iostream>
using namespace std;

class Array
{
    public :
    int size;
    int arr[100];

    Array(int s)
    {
        size = s;
    }

//Insert value in array

void insert()
 {
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Value inserted "<<endl;
 }

 //delete  value in array

 void deleteatindex(int index)
 {
    if(index>=size||index<0)
    {
      cout<<"out of range "<<endl;
      return;
    }
    else if(index == size-1)
    {
      size--;
      cout<<"Element Deleted "<<endl;
      return;
    }
    else
    {
      for(int i=index; i<size; i++)
      {
         arr[i] = arr[i+1];
      }
      size--;
      cout<<"Element deleted at index "<<endl;
    }
 }

 // search

 void search(int value)
 {
   for(int i =0; i<size; i++)
   {
     if(arr[i] == value)
     {
        cout<<"Record is found "<<endl;
     }
   }
   cout<<"Record is not found "<<endl;
 }

//Sorting
void bubblesort()
 {
   for(int i=0; i<size-1; i++)
   {
     for(int j=0; j<size-i-1; j++)
     {
       if(arr[j]>arr[j+1])
       {
         int temp = arr[j];
         arr[j]=arr[j+1];
         arr[j+1] = temp;
       }
     }
   }
   cout<<"Array is sorted "<<endl;
 }

 //Update the value at givem index
 void update(int index, int value)
 {
   if(index<0 || index>size)
   {
      cout<<"Index out of range "<<endl;
      return;
   }
   arr[index] = value;
   cout<<"Array is updated "<<endl;
 }

 // reverse

 void reverse()
 {
  for(int i=0; i<size/2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size-i-1];
    arr[size-i-1] = temp;
  }
  cout<<"Find the reverse Array "<<endl;
 }

// Max and min value
void maxminvalue()
{
  int max = arr[0];
  int min = arr[0];
  for(int i=0; i<size; i++)
  {
    if(arr[i]>max)
    {
      max = arr[i];
    }
    if(arr[i]<min)
    {
      min = arr[i];
    }
  }
  cout<<"Max value is : "<<max<<endl;
  cout<<"Min value is : "<<min<<endl;
}
// Display

void display()
 {
    cout<<"Value of that array is : "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
};

int main()
{
    int n , choice , value, index;
    cout<<"Enter Number of Elements in Array : ";
    cin >> n;

    Array obj(n);

    do
    {
        cout<<"1. Insert Value in Array "<<endl;
        cout<<"2. Delete Value in array "<<endl;
        cout<<"3. Search value in array "<<endl;
        cout<<"4. Sort Array "<<endl;
        cout<<"5. Update Array "<<endl;
        cout<<"6. Reverse the Array "<<endl;
        cout<<"7. Max and Min value in array "<<endl;
        cout<<"8. Display Value in Array "<<endl;
        cout<<"Enter your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
              obj.insert();
              break;

            case 2:
             cout<<"Enter index Number : ";
             cin >> index;
             obj.deleteatindex(index);
             break;
             
            case 3:
             cout<<"Enter Value to be searched :";
             cin >> value;
             obj.search(value);
             break;
             
            case 4:
              obj.bubblesort();
              break;
              
            case 5:
              cout<<"Enter The index : ";
              cin >> index;
              cout<<"Enter the value : ";
              cin >> value;
              obj.update(index,value);
              break;
              
            case 6:
             obj.reverse();
             break;

            case 7:
             obj.maxminvalue();
             break; 


            case 8:
             obj.display();
              break;  

        }
    } while (choice!=20);
    
}