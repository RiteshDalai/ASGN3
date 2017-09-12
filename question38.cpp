#include<iostream>
using namespace std;
int main()
{
	int q,a=0,n,s=0;
	cout<<"Enter any integer(max 10-digit) of your wish:";
	cin>>n;
	q=n;
	s=(n%10)*10;
	while(q>10)
	{
		q=q/10;
		a=q%10;
		s=(s+a)*10;
	}
	cout<<"The reverse number is:"<<s/10<<endl;
	if ((s/10)==n)
	{
		cout<<"The number is palindromic.\n";
	}
	else
	{
		cout<<"The number isn't palindromic\n";
	}
}
