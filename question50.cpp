#include<iostream>
using namespace std;
int main()
{
	int i=2,z,r,n,f;
	cout<<"Enter a number :";
	cin>>n;
	cout<<"The prime factors of "<<n<<" are:-";
	for(z=1;z<=n;z++)
	{
		f=n%z;
		if(f==0)
		{
			for(i = 2; i < z; i++)
			{
	    	 		if(z%i == 0)
				{
			    	      r = z;
			    	      break;
			    	}
			}
			if(r!=z)
			{cout<<z<<", ";}
		}
	}
	cout<<endl;
}
