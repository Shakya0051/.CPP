#include<iostream>
using namespace std;
class car{
    int num = 20;
    friend class B;
};
class B
{
   void show(); 

};
int main()
{
    
}