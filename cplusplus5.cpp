#include <iostream>
#include <stack>
#include <string>


using namespace std;
int main(){
  stack<string> my;

  my.emplace("First");
  my.emplace("Second");


  cout<<"my contanis...............";
  while (!my.empty()){
    cout<<my.top()<<" ";
      my.pop();
    }

    return 0;
}
