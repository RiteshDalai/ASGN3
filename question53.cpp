#include<iostream>
using namespace std;
int main()
{
	int n, i, s = 0;
	cout<<"enter a number";
	cin>>n;
	for(i =1;i<=n/2;i++)
	{
		if(n%i ==0)
		{
			s = s+ i;
		}
	}
	if(s == n)
	{
		cout<<"number is perfect";
	}
	else
	{
		cout<<"number is imperfect";
	}
	return 0;
}