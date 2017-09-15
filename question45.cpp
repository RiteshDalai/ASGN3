#include<iostream>
using namespace std;
int main()
{
	int f,i, j,l,r;
	cout<<"Enter 1st number:";
	cin>>i;
	cout<<"Enter 2nd number:";
	cin>>j;
	if (i<j)
	{
		for(l=1;l<=i;l++)
		{
			if(i%l==0 && j%l==0)
			{r=l;}
		}
		cout<<"The HCF of "<<i<<" & "<<j<<" = "<<r<<endl;
	}
	else if(j<i)
	{
		for(l=1;l<=j;l++)
		{
			if(i%l==0 && j%l==0)
			{r=l;}
		}
		cout<<"The HCF of "<<i<<" & "<<j<<" = "<<r<<endl;
	}
}
