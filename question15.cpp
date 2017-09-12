#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout<<"Enter the lengths:\n";
	cin>>a>>b>>c;
	if (((a+b)>c) && ((b+c)>a) && ((a+c)>b))
	{
		cout<<"It forms a triangle.\n";
	}
	else
	{
		cout<<"It doesn't form a triangle.\n";
	}
}
