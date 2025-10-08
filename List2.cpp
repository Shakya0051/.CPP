#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> lis;
    lis.push_back(11);
    lis.push_back(22);
    lis.push_back(33);
    lis.push_back(100);
    lis.push_back(200);
    lis.push_back(300);

    for(auto i : lis)
    {
        cout<< i <<" ";
    }

    cout<<endl;
    
    lis.reverse(); 

    for(auto i : lis)
    {
        cout<< i <<" ";
    }
    cout<<endl;
    lis.remove(33);  //for removing element by value
    for(auto i : lis)
    {
        cout<< i <<" ";
    }

}