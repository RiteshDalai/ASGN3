#include<iostream>
using namespace std;
int main()
{
	int q,a=0,n,s=0;
	cout<<"Enter any integer(max 10-digit) of your wish:";
	cin>>n;
	q=n;
	s=n%10;
	if(n>10)
	{
		while(q>10)
		{
			q=q/10;
			a=q%10;
			s+=a;
		}
		cout<<"The sum is:"<<s<<endl;
	}
	else
	{
		cout<<"The sum is:"<<s<<endl;
	}
}

