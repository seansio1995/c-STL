#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> mylist;

  for (int i=1;i<10;++i){
    mylist.push_back(i);
  }

  mylist.reverse();

  for(list<int>::iterator it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  return 0;
}
