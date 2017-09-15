#include<iostream>

using namespace std;

int main()
{
	int n, i, s = 0, st, c = 1,d;
	cout<<"enter a number";
	cin>>n;
	st = n;
	while(st!=0)
	{
		d = st%10;
		st = st/10;
		c = 1;
		for(i = 1; i <= d; i++)
		{
			c = c*i;
		}
		s= s + c;
	}
	if(s == n)
	{
		cout<<"number is strong";
	}
	else
	{
		cout<<"number is not strong";
	}
	return 0;
}