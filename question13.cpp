#include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter the amount of money:"<<endl;
	cin>>m;//11452
	int t = (m/1000)*1000;//t=11000
	int h = ((m-t)/100)*100;// h=400
	int n = ((m-(t+h))/10)*10;//n=50
	int o = (m-(t+h+n));//o=2
	cout<<"So you have deposited:\n"<<t/1000<<" thosand rupee note(s)\n "<<h/100<<" hundred rupee note(s)\n "<<n/10<<" ten rupee note(s) and \n"<<o<<" rupee(s)\n";
	return 0;
}
