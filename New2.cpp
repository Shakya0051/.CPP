#include<iostream>
using namespace std;

class base
{
 public:
 base()
 {
    cout<<"constructing base\n";
 }
 virtual ~base()
 {
    cout<<"destructing base\n";
 }
};  
class derived : public base
{
  public :
   derived()
   {
    cout<<"constructinr derived \n";
   }
   ~derived()
   {
    cout<<"destructing derived\n";
   }
};  

int main()
{
    derived*d = new derived();
    base*b = d;
    delete b;

    return 0;
}
    


