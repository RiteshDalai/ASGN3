#include<iostream>
using namespace std;
int main()
{
	int a,n,c=0;
	cout<<"Enter any integer(max 10-digit) of your wish:";
	cin>>n;
	a=n;
	while(a>10)
	{
		a=a/10;
	}
	int f=a;
	int l= n-((n/10)*10);
	cout<<"The first digit is "<<f<<" and  last digit is "<<l<<endl;
}

