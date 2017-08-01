#include <iostream>
#include <deque>

using namespace std;

int main(){
  deque<int> mydeque;

  for (int i=1;i<=5;i++){
    mydeque.push_back(i);
  }

  cout<<"The mydeque contains: ";
  deque<int>:: iterator it=mydeque.begin();

  while(it!=mydeque.end()){
    cout<<" "<<*it++;
  }

  return 0;
}
