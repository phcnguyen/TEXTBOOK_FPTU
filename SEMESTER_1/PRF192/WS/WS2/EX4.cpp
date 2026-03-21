#include<stdio.h>

int main()
{
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	
	if (n % 2 == 0)
	{
		printf("This is even.");
	}
	else
	{
		printf("This is odd.");
	}
}