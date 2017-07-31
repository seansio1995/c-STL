#include<iostream>
#include <list>
using namespace std;


int main(){
  list<int> mylist;
  list<int>::iterator it;

  mylist.push_back(100);
  mylist.push_back(200);
  mylist.push_back(300);

  cout<<"mylist contains :"<<endl;

  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }
  cout<<endl;
  mylist.clear();

  mylist.push_back(1101);

  mylist.push_back(2202);

  cout<<"mylist after clearing now contains: "<<endl;
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  return 0;
}
