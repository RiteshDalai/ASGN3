#include <iostream>
using namespace std;
int main()
{
	int a,n,c=0;
	cout<<"Enter any integer of your wish:";
	cin>>n;
	a=n;
	while(a>0)
	{
		a=a/10;
		c=c+1;
	}
	cout<<"There are "<<c<<" digits in "<<n<<endl;
}

