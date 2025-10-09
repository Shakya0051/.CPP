#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(11);
    st.insert(22);
    st.insert(33);
    st.insert(44);
    st.insert(55);
    st.insert(66);

    for(int x : st)
      cout<< x << " ";
    cout<<endl;

    cout<<st.size()<<endl;
    st.erase(33);
    
    for(int x : st)
      cout<< x << " ";
    cout<<endl;
    st.clear();

}