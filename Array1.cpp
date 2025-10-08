#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10> a = {23,56,87,96,34,89,54,12,10,98};

    /*int c =count(a.begin(), a.end());
    cout<<"Count value is: "<<endl;*/
    //auto mvalue = max_element(a.begin(), a.end());
    //auto mvalue = min_element(a.begin(), a.end());
   /* auto newData = remove(a.begin(), a.end(), 89);
    int d = distance(a.begin(), newData);

    for (int i=0; i<d; i++)
    {
        cout<<a[i]<<"";
    }*/


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