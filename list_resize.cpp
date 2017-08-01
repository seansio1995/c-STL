#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> mylist;

  for (int i=0;i<10;i++){
    mylist.push_back(i);
  }

  mylist.resize(5);
  mylist.resize(8,100);
  mylist.resize(12);

  list<int>::iterator it;

  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }
  return 0;
}
