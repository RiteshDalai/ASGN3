#include<iostream>
using namespace std;
int main()
{
	double i,n,s;
	cout<<"Enter a range you want to print multiplication table upto:";
	cin>>n;
	cout<<"Enter a number you want to print multiplication table of:";
	cin>>i;
	int c=1;
	while(c<=n)
	{
		cout<<i<<" x "<<c<<" = "<<i*c<<endl;
		c=c+1;
	}
}

