#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout<<"Enter 3 angles to check if they make a triangle or not:\n";
	cin>>a;
	cin>>b;
	cin>>c;
	if ((a+b+c==180) && (a>0 && b>0 && c>0) && ((a>=90 && b<90 && c<90)||(a<90 && b<90 && c>=90)||(a<90 && b>=90 && c<90)))
	{
		cout<<a<<" , "<<b<<" and "<<c<<" forms a triangle.\n";
	}
	else
	{
		cout<<a<<" , "<<b<<" and "<<c<<" doesn't form a triangle.\n";
	}
	return 0;
}

