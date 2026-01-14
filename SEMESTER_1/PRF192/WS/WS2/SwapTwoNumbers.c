#include <stdio.h>

int main()
{
	int a, b, c;
	
	a = 5; b = 10; c=0;
	
	printf("a=%i; b=%i\n", a, b);
	
	c = a;
	a = b;
	b = c;
	c = 0;
	
	printf("a=%i; b=%i\n", a, b);
	
	return 0;
}