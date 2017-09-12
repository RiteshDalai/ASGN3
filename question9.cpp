#include<iostream>
using namespace std;
int main()
{
	char b;
	cout<<"Enter any character:";
	cin>>b;
	if ((b>=65 && b<=90) || (b>=97 && b<=122))
	{
		cout<<"IT IS AN ALPHABET\n";
	}
	else if(b>=48 && b<=57)
	{
		cout<<"IT IS A DIGIT\n";
	}
	else
	{
		cout<<"IT IS A CHARACTER\n";
	}
}
