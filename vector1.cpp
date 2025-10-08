#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

int main()
{
    vector<int> v = {11,22,33,44,55,66,77};
    vector<int> v1 = {98,76,54,32,21,12,23};
    bool eq = equal(v.begin(), v.end(), v1.begin()); //for equal
    if(eq)
        cout<<"Vector are equal"<<endl;
    else
        cout<<"Vector are not equal"<<endl;

    v1.swap(v);
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;    

    copy(v.begin(), v.end(), back_inserter(v1));   //for copy
    for(auto i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;    

}