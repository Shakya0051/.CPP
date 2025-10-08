#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

int main()
{
    vector<int> v = {23,54,67,67,67,89,56,34};
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<v.front()<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.back()<<endl;
    v.push_back(89);
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    int x = 78;
    auto pos = next(v.begin(), 3);   //for insert at particular position
    v.insert(pos,x);
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.resize(6);  //for resize
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1);
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    reverse(v.begin(), v.end());
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    sort(v.begin(), v.end());
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    int value = 67;
    int c = count(v.begin(), v.end(),value);
    cout<<c<<endl;

    v.clear();
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}