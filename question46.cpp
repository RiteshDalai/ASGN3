#include<iostream>
using namespace std;
int main()
{
	int i, j, l ,k;
	cout<<"Enter 1st number:";
	cin>>i;
	cout<<"Enter 2nd number:";
	cin>>j;
	for(l=(i*j);l>=1;l--)
	{
		if(l%i==0 && l%j==0)
		{k=l;}
	}
	cout<<"The LCM of "<<i<<" & "<<j<<" = "<<k<<endl;
}
