#include<iostream>
using namespace std;
int main()
{
	char b;
	cout<<"Enter an ALPHABET:";
	cin>>b;
	if (b>=65 && b<=90)
	{
		cout<<"IT IS AN UPPERCASE ALPHABET\n";
	}
	else if (b>=97 && b<=122)
	{
		cout<<"IT IS AN LOWERCASE ALPHABET\n";
	}
	else
	{
		cout<<"ENTER AN ALPHABET!\n";
	}
}
