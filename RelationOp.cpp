#include<iostream>
using namespace std;

class A
{
    int a,b;
    public :
        A(int x, int y)
        {
            a=x;
            b=y;
        }
        A()
        {

        }
        int operator>(A temp)    //keyword for operator overloading
        {
            if (this->a  <= temp.a && this->b <= temp.b)   //relational operator in operator overloading
            {
                return 1;
            }
            else
            {
                 return 0;
            }
        }
        void show()
        {
            cout<<a<<""<<b<<endl;
        }

};

int main()
{
    A ob1(15,66);
    A ob2(64,66);

    if (ob1>ob2)
    {
        ob1.show();
    }
    else
    {
        ob2.show();
    }
}