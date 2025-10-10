#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
  queue<int> qu;
  queue<int> qu1;

  qu.push(1);
  qu.push(2);
  qu.push(3);
  qu.push(4);
  qu.push(5);

cout<<endl;
cout<<qu.front()<<endl;
cout<<qu.back()<<endl;
cout<<qu.size()<<endl;
// cout<<qu.emplace(40)<<endl;
cout<<qu.empty()<<endl;
qu.swap(qu1);

  while(!qu1.empty()){
    cout<<qu1.front()<<" ";
    qu1.pop();
  }
}