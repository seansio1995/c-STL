#include <functional>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

int main(){
  priority_queue<int,vector<int>, greater<int>> myque;

  myque.push(30);
  myque.push(130);
  myque.push(20);
  myque.push(40);
  myque.push(11);

  while(!myque.empty()){
    cout<<" "<<myque.top();
    myque.pop();
  }

  cout<<endl;
  return 0;
}
