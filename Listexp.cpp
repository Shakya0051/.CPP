#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{   
    array< int ,10> arr = {12,23,45,67,57,34,56,45,89,23};
    int x = 57;
    auto ptr = find(arr.begin(), arr.end(),x);

    if (ptr!=arr.end())
    {
        cout<<"Value find at position : " <<distance(arr.begin(),ptr)<<endl;
    }
}