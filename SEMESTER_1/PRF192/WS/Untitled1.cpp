#include<stdio.h>

int main()
{
	int i =0, n =10;
	int array[n] = {12,9,8,1,4,6,8,5,3,1};
	
	do {
		printf("%d \t", array[i]);
		i++;
	} while(i < n);
	
	
	return 0;
}