#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    /*while (!s.empty()) ///for push and pop
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;*/
    cout<<""<<s.top()<<endl;    //for top element
    cout<<""<<s.size()<<endl;     //for size
    /*while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }*/
}