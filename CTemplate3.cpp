#include<iostream>
using namespace std;

template< class T, class U>
class A
{
    T x;
    U y;

    public:
    A()
    {
        cout<<"Constructor Called"<<endl;
    }
    A(T i,U j)
    {
        x=i;
        y=j;
    }

    void show()
    {
        cout<<x+y;
    }
};

int main()
{
    A<char,char>a;
    A<int,double>b;
    A<int,float>ob(2,3.4);
    ob.show();

    return 0;
}
