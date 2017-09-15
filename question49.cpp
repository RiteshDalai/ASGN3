#include<iostream>
using namespace std;
int main()
{
	int i=2,l,r,n,s=0;
	cout<<"Enter a number range:";
	cin>>n;
	cout<<"The prime numbers from 1 to "<<n<<" are:-";
	for(l=2;l<=n;l++)
	{
		for(i = 2; i < l; i++)
		{
	    	  if(l%i == 0)
	    	  {
	    	      r = l;
	    	      break;
	    	  }
		}
		if(r!=l)
		{s+=l;}
	}
	cout<<"sum is:"<<s<<endl;
}
