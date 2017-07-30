#include <iostream>
using namespace std;

void print  (char *c)
{
	while(*c!='\0')
	{
		cout<<*c<<" ";
		c++;
	}
	cout<<endl;

}


int main()
{
	char c[20]="hello";
	print(c);
	return 0;
}