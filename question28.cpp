#include<iostream>
using namespace std;
int main()
{
	int i=1,n,s;
	cout<<"Enter a range you want to print sum upto:";
	cin>>n;
	while(i<=n)
	{
		if (i%2==0)
		{
			s+=i;
		}
		i=i+1;
	}
	cout<<s<<endl;
}

