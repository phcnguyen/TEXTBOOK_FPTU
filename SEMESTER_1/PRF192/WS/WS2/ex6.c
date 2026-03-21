#include<stdio.h>

int main()
{
	int a, b;
	printf("Input A,B: ");
	scanf("%i %i", &a, &b);
	
	if (a != 0 && b != 0)
	{
		printf("a is not equal to 0 and b is not equal to 0");
	}
	else if ( a == 0 && b == 0)
	{
		printf("a is equal to 0 or bis equal to 0");
	}
	
	return 0;
}