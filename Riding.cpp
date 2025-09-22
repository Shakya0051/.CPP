#include<iostream>
using namespace std;

class A
{
   public :
    void show()  //virtual is used for overriding
   {
    cout<<"Class of A"<<endl;
   }
   //virtual void print()
  // { 
    //  cout<<"Hello"<<endl;
  // }
};
class B : public A
{
   public:
   void show()
   {
    cout<<"Class of B"<<endl;
    //A::show(); //using overridden function from derived class
   }
  // void print()
   //{
     // cout<<"Hello C++"<<endl;
   //}
};

int main()
{
   //A* obj; //using pointer 
   B obj;
   obj.show();
   obj.A::show();
  // obj = &ob;
   //obj->A::show(); //for calling base class
   //obj->show(); //for calling child class
  // obj->A::print(); //for calling base class
  // obj->print(); //for calling child class
}