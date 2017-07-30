#include <stack>
#include <iostream>

using namespace std;


int main(){
  stack<int> foo,bar;

  foo.push(10);
  foo.push(20);
  foo.push(30);
  bar.push(10);
  bar.push(20);

  foo.swap(bar);

  cout<<"size of foo: "<<foo.size()<<endl;
  cout<<"size of bar: "<<bar.size()<<endl;
  return 0;
}
