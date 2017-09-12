#include<stdio.h>
int main()
{
	int a;
	printf("Enter an integer:\n");
	scanf("%i",&a);
	if (a>0)
	{
		printf("It is a positive integer.\n");
	}
	else if(a<0)
	{
		printf("It is a negetive integer.\n");
	}
	else
	{
		printf("It is ZERO.\n");
	}
}
