#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter the angles of the triangle(in degree):";
	cin>>a>>b>>c;
	if(a==b||b==c||c==a)	
	{
		if (a==60 && b==60 && c==60)
			cout<<"The triangle is equilateral.\n";
		else
			cout<<"The triangle is isoceles.\n";
	}
	else
		cout<<"The triangle is scalene.\n";
}
