#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> lis;
    /*int n;
    cout<< " Enter Number of element : ";
    cin>>n;

   /* for(int i=0 ; i<n; i++)
    {
        int v;
        cin>>v;
        lis.push_back(v);
    }
    for(auto i : lis)
    {
        cout<< i << " ";
    } 
    cout<<endl;   
    lis.clear();  // for clearing the whole list 
    for(auto i : lis)
    {
        cout<< i << " ";
    }    
    */
    lis.push_back(10);
    lis.push_back(20);
    lis.push_front(30);
    lis.push_back(40);
    for(auto i : lis)
    {
        cout<< i <<" ";
    }
    cout<<endl;
    lis.pop_front();  //for clearing the single element
    lis.pop_back();
     for(auto i : lis)
    {
        cout<< i <<" ";
    } 
    cout<<endl; 
    int x = 99;
    int y = 100;
    int z = 200;
    lis.insert(lis.begin(),x); //for front position
    lis.insert(lis.end(),y);  //for back position

    auto pos = next(lis.begin(), 2); //for insert a particular position
    lis.insert(pos, z);

    cout<<endl;
    for(auto i : lis)
    {
        cout<< i << " ";
    }  
    
    int p = 3;
    auto p1 = next(lis.begin(), p);
    lis.erase(p1);  //for erasing a single element by its position or index

    cout<<endl;
    for(auto i : lis)
    {
        cout<< i << " ";
    } 
    
    cout<<endl;
    cout<<lis.size()<<endl;
    cout<<lis.empty()<<endl;
    
}