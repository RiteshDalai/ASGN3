#include<iostream>
using namespace std;
int main()
{
	double eunit ,bill, net;
	cout<<"Enter the units of electricity consumed:";
	cin>>eunit;
	if (eunit <=50)
	{
		bill= (0.5*eunit);
		net= bill+((bill*20)/100);
		cout<<"Your bill for "<<eunit<<" units is "<<net;
	}
	else if (eunit<=150)
	{
		bill= (0.5*50)+(0.75*(eunit-50));
		net= bill+((bill*20)/100);
		cout<<"Your bill for "<<eunit<<" units is "<<net;
	}
	else if (eunit<=250)
	{
		bill= (0.5*50)+(0.75*100)+(1.20*(eunit-150));
		net= bill+((bill*20)/100);
		cout<<"Your bill for "<<eunit<<" units is "<<net;
	}
	else
	{
		bill= (0.5*50)+(0.75*100)+(1.20*100)+(1.50*eunit-250);
		net= bill+((bill*20)/100);
		cout<<"Your bill for "<<eunit<<" units is "<<net;
	}
}
