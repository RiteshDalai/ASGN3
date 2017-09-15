#include<iostream>

using namespace std;

int main()
{
	int n, i, s = 0;
	cout<<"enter a number";
	cin>>n;
	for(int j=1;j<n;j++)
	{
		s = 0;
	
	for(i =1;i<=j/2;i++)
	{
		if(j%i ==0)
		{
			s = s + i;
		}
	}
	if(s == j)
	{
		cout<<j<<" ";
	}
	}

	return 0;
}