#include<stdio.h>

int main()
{
	int a[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int b[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int c[5][5] = {};
	
	for (int i =0; i< 3;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for (int i =0; i< 3;i++)
	{
		
		for (int j = 0; j < 5; j++)
		{
			printf("%d \t", c[i][j]);
		}
		
		printf("\n");
	}
}