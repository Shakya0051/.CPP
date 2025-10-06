#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> lis;
    lis.push_back(10);
    lis.push_back(20);

    list<int> lis1;
    lis.push_back(12);
    lis.push_back(22);

    lis.splice(lis.begin()/*end()*/, lis1);
     for(auto i : lis)
    {
        cout<< i <<" ";
    }
}