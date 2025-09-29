#include<iostream>
using namespace std;

template<class T, class U>
T fun(T a ,U b )
{
    return (a+b);
}

int main()
{
    cout<<fun(12.5,5)<<endl; //first element parameter determine the other variables parameters
    cout<<fun(12,5.5)<<endl;  //in first return type is float 
                              //in second return type is int
}