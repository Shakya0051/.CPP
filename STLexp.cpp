#include<iostream>
#include<vector>
#include<algorithm>  //for iterators
using namespace std;

int main()
{    
    vector<int> v = {34,54,23,16,90};
    sort (v.begin(), v.end());

    cout<<"Sorted vector : ";

    for(int x : v)
    cout<< x << " " ;
    cout<< endl;

    if(binary_search(v.begin(), v.end(),20))

         cout<<"20 found in the vector"<<endl;
    else
         cout<<"20 not found in vector"<<endl;


    return 0;
}
