#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> a = {23,56,87,96,34};


    for(int i=0; i<5; i++)
    {
        cout<< a[i] <<" ";
        cout<<endl;
    }
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.data()<<endl;
    cout<<a.at(1)<<endl;
}