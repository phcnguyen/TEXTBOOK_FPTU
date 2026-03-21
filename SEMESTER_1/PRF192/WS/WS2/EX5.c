#include<stdio.h>

int main()
{
	int i = 0;
	printf("Input number: ");
	scanf("%i", &i);
	
	if (i == 0)
	{
		printf("n is equal to 0");
	}
	else if (i * 1 > 0)
	{
		printf("n is a positive integer");
	}
	else if (i * -1 > 0)
	{
		printf("n is a negative integer");
	}
	
	return 0;
}