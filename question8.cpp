#include<iostream>
using namespace std;
int main()
{
	char b;
	cout<<"Enter an alphabet:";
	cin>>b;
	if(b==65 || b==69 || b==73 || b==79 || b== 85 || b==97 || b==117 || b==101 || b==105 || b==111)
	{
		cout<< b<< " is a vowel." <<endl;
	}
	else
	{
		cout<< b<< " is a consonant."<<endl;
	}
}
