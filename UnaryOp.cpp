#include<iostream>
using namespace std;

class A
{
  public :
    int feet,inch;

    A(int f,int i)
    {
        this->feet =f;
        this->inch =i;
    }
    void operator-()
    {
        feet++;
        inch++;
        cout<<"\nfeet & inches(Increment):"<<feet<<""<<inch;
    }
};

int main()
{
    A d1(8,9);

    -d1;
    return 0;
}
