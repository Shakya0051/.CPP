#include<iostream>
using namespace std;
 int main(){
    int*ptr =new int(10);
    cout<<*ptr<<endl;
    delete ptr;
    cout<<*ptr;
    ptr=NULL;
 }