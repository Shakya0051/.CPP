#include<iostream>
using namespace std;
 
class A
{
    public:
    void show()
    {
        cout<<"Class of A"<<endl;
    }
};
class B : virtual public A
{
    public:
    void put()
    {
        cout<<"Class of B"<<endl;
    }
};
class C : virtual public A
{
     public:
     void get()
     {
        cout<<"class of c"<<endl;
     }
};

int main()
{
    B b;
    C obj;
    obj.show();
    b.put();
    obj.get();
}