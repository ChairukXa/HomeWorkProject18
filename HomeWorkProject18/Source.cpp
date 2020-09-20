#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Positve_or_Negative(int x)
{
	if (x == 0)
	{
		printf("Zero");
	}
	else if (x > 0)
	{
		if (x % 2 == 0)
		{
			printf("Positve Even", x);
		}
		else
		{
			printf("Positve Odd", x);
		}
	}
	else if (x < 0)
	{
		if (x % 2 == 0)
		{
			printf("Negative Even", x);
		}
		else
		{
			printf("Negative Odd", x);
		}
	}
}
int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d", &num);
	Positve_or_Negative(num);
	return 0;
}