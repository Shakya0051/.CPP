#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
   /* int n;
    cout<<"Enter the elements : ";
    cin>>n;*/

    array<int,5> a ;
    cout<<" Enter value of array : ";
    for( int i=0; i<5; i++)
    {
          cin>>a[i];
    }
    cout<<"Value of array : "<<endl;
    for(auto i : a)
    {
        cout<<i<<" ";
    }

   // sort(a.begin(), a.end());
    //reverse(a.begin(), a.end());  
    
  /*  cout<<"Value after array : "<<endl;
    for(auto i : a)
    {
        cout<<i<<" ";
    }*/
   int se ; //for searching
   cout<<" \nEnter value to be search : ";
   cin>>se;

   auto ptr = find(a.begin(), a.end(),se);
   if (ptr!=a.end())
   {
      cout<<"value found at index "<<ptr - a.begin()<<endl;
   }
   else
   {
       cout<<"Element not found"<<endl;
   }

}
