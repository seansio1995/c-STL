#include <iostream>
#include <vector>

using namespace std;
int main()
{
  int foo[]={10,20,30,40,50};

  vector<int> bar;

  for (auto it=begin(foo);it!=end(foo);++it){
    bar.push_back(*it);
  }


  cout<<"bar contains:";

  for (auto it=begin(bar);it!=end(bar);++it){
    cout<<" "<<*it;
  }
  cout<<endl;
  return 0;
}
