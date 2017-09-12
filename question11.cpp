#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number of a weekday of your choice:\n(Referring to Sunday as 1st day of week i.e, weekday number of sunday =1)\n";
	cin>>a;
	if (a==1)
	{
		cout<<"SUNDAY IT IS!";
	}
	else if (a==2)
	{
		cout<<"MONDAY IT IS!";
	}
	else if (a==3)
	{
		cout<<"TUESDAY IT IS!";
	}
	else if(a==4)
	{
		cout<<"WEDNESDAY IT IS!";
	}
	else if (a==5)
	{
		cout<<"THURSDAY IT IS!";
	}
	else if (a==6)
	{
		cout<<"FRIDAY IT IS!";
	}
	else
	{
		cout<<"SATURDAY IT IS!";
	}
}
