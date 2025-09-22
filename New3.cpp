#include<iostream>
using namespace std;

class A
{
  public :
  int num;
  virtual void show() = 0;
   
  A(int x)
  {
      num = x;
  }
};

class B : public A
{
   public :
   int num1;

   B(int x , int y) : A(x)
   {
      num1 = y;
   }

   void show()
   {
      cout<<num<<""<<num1<<endl;
   }
};

int main()
{
    B obj(10,12);
    obj.show();

    A* ob = new B(7,8);
    ob->show();

}