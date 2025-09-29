#include<iostream>
using namespace std;

template <typename T>
T show(T a , T b)
{
    return(a+b);
}

int main()
{
    cout<<"Integers : " <<show<int>(23,53)<<endl;
    cout<< "float : "<<show<float>(3.45,7.8)<<endl;;

    return 0;
}