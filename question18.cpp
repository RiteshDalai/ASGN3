#include<iostream>
using namespace std;
int main()
{
	float cp, sp;
	cout<<"Enter the cost price:";cin>>cp;
	cout<<"Enetr the selling price:";cin>>sp;
	if(sp>cp)	
		cout<<"The profit:\n"<<sp-cp;
	else if(cp>sp)
		cout<<"The loss:\n"<<cp-sp;
	else
		cout<<"As Cost price = Selling price so profit = 0\n";
}
