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

int main()
{
    B obj;
    obj.show();
    obj.put();

}