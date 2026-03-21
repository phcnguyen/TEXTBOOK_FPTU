#include <stdio.h>

int main()
{
	int a;
	printf("P: ");
	scanf("%i", &a);
	
	if (a >= 10 || a <= 100)
	{
		printf("{P} is in range (10, 100)");
	}
	else {
		printf("{P} is not in range (10, 100)");
	}
}