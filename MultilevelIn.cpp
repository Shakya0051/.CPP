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

class B : public A
{
    public:
     void put()
     {
        cout<<"Class of B"<<endl;
     }
};
 
class C : public B
{
     public:
      void get()
      {
        cout<<"Class of C"<<endl;
      }
};

int main()
{
    C obj;
    obj.show();
    obj.put();
    obj.get();
}