#include<stdio.h>
int main()
{
	int a;
	printf("Enter the year of your choice:");
	scanf("%i",&a);
	if ((2000-a)-(((2000-a)/4)*4) == 0)
	{
		printf("%i is a leap year.\n", a);
	}
	else
	{
		printf("%i is a normal year.\n", a);
	}
}
