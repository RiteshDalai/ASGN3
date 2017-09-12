#include<iostream>
using namespace std;
int main()
{
	int Basic_Salary;
	double HRA, DA;
	cout<<"Enter your Basic Salary:";
	cin>>Basic_Salary;
	if (Basic_Salary <= 10000)
	{
		HRA = (20*Basic_Salary)/100;
		DA = (80*Basic_Salary)/100;
	}

	else if (Basic_Salary <= 20000)
	{
		HRA = (25*Basic_Salary)/100;
		DA = (90*Basic_Salary)/100;
	}
	else if (Basic_Salary > 20000)
	{
		HRA = (30*Basic_Salary)/100;
		DA = (95*Basic_Salary)/100;
	}
	cout<<"Gross Salary = "<< Basic_Salary+HRA+DA<<"\n";
}
