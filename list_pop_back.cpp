#include <iostream>
#include <list>

using namespace std;

int main(){

  list<int> mylist;

  int sum=0;

  mylist.push_back(100);
  mylist.push_back(200);

  mylist.push_back(300);

  while(!mylist.empty()){
    sum+=mylist.back();
    mylist.pop_back();

  }

  cout<<"The total sum is "<<sum<<endl;
  cout<<"test"<<endl;
  return 0;
}
