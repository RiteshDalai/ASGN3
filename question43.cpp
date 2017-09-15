#include<iostream>
using namespace std;
int main()
{
	int n,i,f,r;
	cout<<"Enter any number:";
	cin>>n;
	cout<<"The factors of "<<n<<" are ";
	for(i=1;i<=n;i++)
	{
		f=n%i;
		if(f==0)
		{
			cout<<i<<", ";
		}
	}
}
