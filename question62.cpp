#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int bina, store, digit, flag = 0,y,z,sum = 0;
	cout<<"enter a binary number";
	cin>>bina;
	store = bina;
	while(store!=0 && flag ==0)
	{
		digit = store%10;
		store = store/10;
		if(digit != 1 && digit != 0)
		{
			cout<<" error: enter a proper binary number";
			flag = 1;
		}
		
	}
	store = bina;
	if(flag == 0)
	{
		for(int x =2;x>=0;x--)
		{
			sum = 0;
			y = pow(10000,x);
			z = store/y;
			store = store%y;
			for(int j = 0; j<4; j++)
			{
				digit = z%10;
				z = z/10;
				sum = sum + digit*pow(2,j);
			}
			if(sum <10)
			{
				cout<<sum;
			}else if (sum == 10)
			{
				cout<<"A";
			}else if (sum == 11)
			{
				cout<<"B";
			}else if (sum == 12)
			{
				cout<<"C";
			}else if (sum == 13)
			{
				cout<<"D";
			}else if (sum == 14)
			{
				cout<<"E";
			}else if (sum == 15)
			{
				cout<<"F";
			}
		}
	}
	return 0;
}