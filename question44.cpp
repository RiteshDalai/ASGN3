#include<iostream>
using namespace std;
int main()
{
	int n,f=1,i;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	cout<<"The factorial of "<<n<<" is"<<f;
}

