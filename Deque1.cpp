#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;
int main(){
  deque<int> du; 
  du.push_front(10);
  du.push_front(20);
  du.push_front(30);
  du.push_front(40);
  du.push_front(50);


du.pop_front();
du.pop_back();
cout<<du.size()<<endl;
cout<<du.empty()<<endl;
cout<<du.at(2)<<endl;
// du.sort();
du.erase(du.begin()+2);
int p = 100;
auto pos = next(du.begin(), 2);
du.insert(pos, p);


  while(!du.empty()){
    cout<<du.front()<<"-->";
    du.pop_front();
  }
}
