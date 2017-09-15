#include<iostream>

using namespace std;

int main()
{
	int n, i, s= 0, st, c = 1,d;
	cout<<"enter a number";
	cin>>n;
	for(int j =1; j<n;j++)
	{
	st = j;
	s= 0;
	c = 1;
	while(st!=0)
	{
		d = st%10;
		st = st/10;
		c = 1;
		for(i = 1; i <= d; i++)
		{
			c = c*i;
		}
		s = s + c;
	}
	if(s == j)
	{
		cout<<j<<" ";
	}
	}
	return 0;
}