#include<iostream>
using namespace std;
int main()
{
	int n, i j,c,l,s=0;
	cout<<"Enter a number:";
	cin>>n;
	i=n;
	l=n%10;
	while(i>0)
	{
		i=i/10;
		j=i%10;
		c=j*j*j;
		s+=c;
	}
	if(s==n)
	{
		cout<<"IT'S ARMSTRONG.\n";
	}
	else
	{
		cout<<"IT'S NOT ARMSTRONG.\n";
	}
}
