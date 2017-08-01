#include <iostream>
#include <forward_list>
#include <functional>


using namespace std;

int main(){
  forward_list<double> first={4.2, 2.9, 3.1};
  forward_list<double> second={1.4, 7.7, 3.1};

  forward_list<double> third={6.2, 3.7, 7.1};

  first.sort();
  second.sort();
  first.merge(second);

  cout<<"first contains:";
  for( double& x: first){
    cout<<" "<<x;
  }
  cout<<endl;

  first.sort(greater<double>());
  third.sort(greater<double>());

  first.merge(third,greater<double>());


  cout<<"first contains: ";
  for(double& x: first){
    cout<<" "<<x;
  }
  cout<<endl;
  return 0;
}
