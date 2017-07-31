#include <iostream>
#include <list>


using namespace std;
int main()
{
  list<int> first;
  list<int> second;

  first.assign(7,100);
  second.assign(first.begin(),first.end());


  // cout<<"Size of first :"<<first.size()<<endl;
  //
  // cout<<"Size of second :"<<second.size()<<endl;

  int myints[]={1776,7,4};
  first.assign(myints,myints+3);

cout<<"The elements in first: ";
  for(list<int>::iterator it=first.begin();it!=first.end();++it){

    cout<<" "<<*it;
  }
  return 0;
}
