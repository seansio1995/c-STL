#include <iostream>
#include <cmath>
#include <list>

using namespace std;

bool same_integral_part (double first,double second){
  return (int(first)==int(second));
}

struct is_near {
  bool operator() (double first, double second){
    return (fabs(first-second)<5.0);
  }
};


int  main() {
  /* code */

  double mydoubles[]={ 12.15,  2.72, 73.0,  12.77,  3.14,
                       12.77, 73.35, 72.25, 15.3,  72.25 };

  list<double> mylist (mydoubles,mydoubles+10);
  list<double>::iterator it;
  mylist.sort();

cout<<"Sorted List:";
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  cout<<endl;

  mylist.unique();
  cout<<"Unique List: ";
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  cout<<endl;

  mylist.unique(same_integral_part);
  cout<<"Unique List (same_integral_part): ";
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }

  cout<<endl;
  mylist.unique(is_near());
  cout<<"Unique List (is_near): ";
  for(it=mylist.begin();it!=mylist.end();++it){
    cout<<" "<<*it;
  }
  cout<<endl;
  return 0;
}
