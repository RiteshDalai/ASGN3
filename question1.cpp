//Why does using 'double' doesn't return the result I expect.
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:-\n";
	cin>>a, b;
	if (a>b)
	{
		cout<<"So "<<a<<" > "<<b<<".\n";
	}
	else if (b>a)
	{

		cout<<"So "<<b<<" > "<<a<<".\n";
	}
	else
	{
		cout<<"So "<<a<<" = "<<b<<".\n";
	}
	return 0;
}
