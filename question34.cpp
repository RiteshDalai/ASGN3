#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,s=0,f,c,sw;
	cout<<"Enter any integer(max 10-digit) of your wish:";
	cin>>n;
	s=(n%10);
	c= log10(n);
	f =(n / pow(10, c));
	sw = s;
	sw *= round((pow(10, c)));
	sw += (n % (int)(pow(10, c)));
	sw -= s;
	sw += f;
	cout<<"The swapped number is:"<<sw<<endl;
}

