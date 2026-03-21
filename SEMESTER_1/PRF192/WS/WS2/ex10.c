#include <stdio.h>

int main()
{
	int a, b, d;
	char c;
	printf("Input a, b, c: ");
	scanf("%i %i %c", &a, &b, &c);
	
	if (c == '-')
	{
		d = a - b;
	}
	else if (c == '+')
	{
		d = a + b;
	}
	else if (c == '/')
	{
		d = a / b;	
	}
	else if (c == '*')
	{
		d = a * b;
	}
	
	printf("%d %c %d = %d", a, c, b, d);
	
	return 0;
}