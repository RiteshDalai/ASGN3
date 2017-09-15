#include<iostream>
using namespace std;
int main()
{
	int x, y;float e=1;
	cout<<"Enter the number base:";
	cin>>x;
	cout<<"Enter the exponent of the base:";
	cin>>y;
	for(int i=1;i<=y;i++)
	{
		e=e*x;
	}
	cout<<"The power of "<<x<<"^"<<y<<" is "<<e<<endl;
}
