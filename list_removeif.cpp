#include <iostream>
#include <list>
#include <array>
using namespace std;

bool single_digit (const int& value){
  return (value < 10);
}

struct is_odd{
  bool operator() (const int& value){
    return (value%2)==1;
  }
};



int main(){
  int myints[]= {15,36,7,17,20,39,4,1};
  int arrsize=sizeof(myints)/sizeof(int);

  list<int> mylist (myints,myints+arrsize);

  mylist.remove_if(single_digit);

  list<int> ::iterator it;
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<*it<<endl;
  }

  mylist.remove_if(is_odd());
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<*it<<endl;
  }
  return 0;
}
