#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, st, s, d, c = 0;
	cout<<"enter a number";
	cin>>n;
	st= n;
	for(int i = 1; i<n; i++)
	{
	st = i;
	c = 0;
	while(st!=0)
	{
		d = st%10;
		st = st/10;
		c++;
	}
	st = i;
	s= 0;
	while(st!=0)
	{
		d = st%10;
		st= st/10;
		d = pow(d,c);
		s= s + d;
	}
	if(s == i)
	{
		cout<<i<<" ";
	}

	}
	return 0;
}
