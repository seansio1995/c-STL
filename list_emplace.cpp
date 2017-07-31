#include <iostream>
#include <list>

using namespace std;

int main(){

  list<pair<int,char>> mylist;

  mylist.emplace(mylist.begin(),100,'x');

  mylist.emplace(mylist.begin(),200,'y');

  cout<<"mylist contains: "<<endl;

  for (auto& x: mylist){
    cout<<" "<<x.first<<" "<<x.second<<endl;
  }

  return 0;
}
