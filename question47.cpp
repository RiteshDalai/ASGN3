#include<iostream>
using namespace std;
int main()
{
	int i=2,l,r;
	cout<<"Enter a number:";
	cin>>l;
	for(i = 2; i < l; i++)
	{
    	  if(l % i == 0)
    	  {
    	      r = l;
    	      break;
    	  }
	}
	if(r==l)
	{cout<<l<<" is a composite number.\n";}
	else
	{cout<<l<<" is a prime number.\n";}
}
