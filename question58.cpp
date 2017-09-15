#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int bina, st, d, flag = 0;
	cout<<"enter a binary number";
	cin>>bina;
	st = bina;
	while(st!=0 && flag ==0)
	{
		d = st%10;
		st = st/10;
		if(d != 1 && d != 0)
		{
			cout<<" error: enter a proper binary number";
			flag = 1;
		}
		
	}
	st = bina;
	if(flag == 0)
	{
		for(int i = 7; i>=0; i--)
		{
			d = st/pow(10,i);
		if (d == 1)
		{
			cout<<"0";
			st = st - pow(10,i);
		}
		else if (d ==0)
		{
			cout<<"1";
		}
		}
	}
	return 0;
}