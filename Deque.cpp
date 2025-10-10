#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(20);
    dq.push_back(40);
    dq.push_front(30);
    dq.push_back(80);
    for (int x : dq)
        cout << x << " ";  
    cout << endl;


    dq.pop_front();
    dq.pop_back();
    for (int x : dq)
        cout << x << " ";  
    cout << endl;

    cout<<dq.size()<<endl;


}
