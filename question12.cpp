#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the month number(1-12):";
	cin>>a;
	if (a<13)
	{
		if (((a-((a/2)*2) ==  0) && (a!=2) && (a<8)) || ((a-((a/2)*2) == 1) && (a>8)))
		{
			cout<<a<<" has 30 days.\n";
		}
		else if (a==2)
		{
			cout<<a<<" is february and has 28 days.\n";
		}
		else if (a==8)
		{
			cout <<a<< " is august and has 31 days.\n";
		}
		else
		{
			cout<< a<< " has 31 days.\n";
		}
	}
	else
	{
		cout<<"Enter a valid month number.\n";
	}
}
