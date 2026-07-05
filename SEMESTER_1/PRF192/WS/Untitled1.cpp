#include<stdio.h>

int main()
{
	int s =0;
	
	for (int i =0; i<= 2; i++)
	{
		for (int j = 1; j <=3; j++)
		{
			s = s + (2*i + 3*j);
		}
	}
	
	printf("%i", s);
}