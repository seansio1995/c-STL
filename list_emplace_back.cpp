#include <iostream>
#include <list>
using namespace std;



int main(){
  list<pair<int,char>> mylist;

  mylist.emplace_back(10,'a');

  mylist.emplace_back(20,'b');

  mylist.emplace_back(30,'c');

  cout<<"mylist contains:"<<endl;


  for (auto& x: mylist){
    cout<<"("<<x.first<<","<<x.second<<")"<<endl;
  }
  return 0;
}
