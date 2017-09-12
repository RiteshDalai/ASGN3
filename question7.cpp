#include<iostream>
using namespace std;
int main()
{
	char b;
	cout << "Enter any character:\n";
	cin >> b;
	if (b>=48 && b<=57)
	{
		cout<<"It is a number.\n";
	}
	else 
	{
		cout << "It is a character.\n";
	}
}
