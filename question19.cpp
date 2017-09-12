#include<iostream>
using namespace std;
int main()
{
	float g,p,c,m,b,cs;
	cout<<"Enter marks in PHYSICS, CHEMISTRY, MATHS, BIOLOGY & COMPUTER respectively:\n";
	cin>>p>>c>>m>>b>>cs;
	if((p+c+m+b+cs)<=500)
	{
		g = ((p+c+m+b+cs)/500)*100;
		if(g>=90)
			cout<<"You have received "<<g<<" percent.\n Grade:A\n";
		else if(g>=80)
			cout<<"You have received "<<g<<" percent.\n Grade:B\n";
		else if(g>=70)
			cout<<"You have received "<<g<<" percent.\n Grade:C\n";
		else if(g>=60)
			cout<<"You have received "<<g<<" percent.\n Grade:D\n";
		else if(g>=40)
			cout<<"You have received "<<g<<" percent.\n Grade:E\n";
		else
			cout<<"You have received "<<g<<" percent.\n Grade:F\n";
	}
	else
		cout<<"Enter marks in each subject out of 100.\n";
}
