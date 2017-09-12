#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"Enter the value of n:";
	cin>>n;
	i=n;
	while(i<=n && i>0)
	{
		cout<<i<<endl;
		i=i-1;
	}
}
