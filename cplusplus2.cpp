#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main(){
  list<int> foo, bar;

  for (int i=1;i<=5;i++){
    foo.push_back(i);
    bar.push_back(i*10);
  }

  list<int>:: iterator it=foo.begin();

  advance(it,3);

  copy(bar.begin(),bar.end(),inserter(foo,it));

  for (auto it=begin(foo);it!=end(foo);++it){
    cout<<" "<<*it;
  }

  cout<<endl;
  return 0;
}
