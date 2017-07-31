#include <iostream>
#include <list>
using namespace std;


int main(){

  list<int> mylist;

  mylist.push_back(10);

  while (mylist.back()!=0){
    mylist.push_back(mylist.back()-1);
  }

  for (list<int>::iterator it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  return 0;
}
