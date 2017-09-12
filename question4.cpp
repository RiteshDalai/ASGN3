#include<stdio.h>
int main()
{
	float a;
	printf("Enter a number:");
	scanf("%f",&a);
	int q = (a/55);
	int r = a- (55*q);
	if (r == 0)
	{
		printf("%f is divisible by 5 & 11.\n",a);
	}
	else
	{
		printf("%f is not divisible by 5 & 11.\n",a);
	}
}
