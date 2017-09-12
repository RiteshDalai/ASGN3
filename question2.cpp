#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 numbers we want to compare:\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	if (a>b && a>c)
	{
		printf("%i is the greatest.\n",a);
	}
	else if (b>a && b>c)
	{
		printf("%i is the greatest.\n",b);
	}
	else if (c>a && c>b)
	{
		printf("%i is the greatest.\n",c);
	}
	else if (a==b && a>c)
	{
		printf("%i is greater than %i but equal to %i.\n", a,c,b);
	}
	else if (a==c && a>b)
	{
		printf("%i is greater than %i but equal to %i.\n",a,b,c);
	}
	else if (b==c && b>a)
	{
		printf("%i is greater than %i but equal to %i.\n",b,a,c);
	}
	else
	{
		printf("%i, %i, %i are all equal.\n",a,b,c);
	}
}
