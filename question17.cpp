#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	double x1, x2, x;
	cout<<"Enter the coefficient of x^2 :";
	cin>>a;
	cout<<"Enter the coefficient of x :";
	cin>>b;
	cout<<"Enter the coefficient of 1 :";
	cin>>c;
	double d= (b*b)-(4*a*c);
	if (d>0)
	{
		x1= ((-b)+pow(d,0.5))/(2*a);
		x2= ((-b)-pow(d,0.5))/(2*a);
		cout<<"The roots are:-"<<x1<<" & "<<x2;
	}
	else if (d<0)
	{
		cout<<"("<<-b<<" + i"<<pow((-d),0.5)<<")/"<<(2*a);
		cout<<"("<<-b<<" - i"<<pow((-d),0.5)<<")/"<<(2*a);
	}
	else
	{
	        x=(-b)/(2*a);
	        cout<<"The roots are:"<<x;
        }
}
