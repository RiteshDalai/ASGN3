#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	int i = 0,p= 1, pr = 0;;
	while(i<n)
	{
		cout<<i<<" ";
		pr= p;
		p = i;
		i = p + pr;
	}
	return 0;
}