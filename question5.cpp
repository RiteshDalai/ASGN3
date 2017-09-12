#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%i",&a);
	if (a-((a/2)*2) ==  0)
	{
		printf("%i is even.\n",a);
	}
	else
	{
		printf("%i is odd.\n",a);
	}
}
