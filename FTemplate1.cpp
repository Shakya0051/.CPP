#include<iostream>
using namespace std;

template< typename T>
T show (T a, T b ,T c)  //T show(T x, T y)
{
    if (a>=b && a>=c)
    return a;          //return ((x>y)?x:y);
    else if(b>=a && b>=c)
    return b;
    else
    return c;
}

int main()
{
    cout<<show<int>(23,45,93)<<endl;
    cout<<show<float>(4.5,6.7,8.2)<<endl;
    cout<<show<char>('A','B','D')<<endl;

    return 0;
}