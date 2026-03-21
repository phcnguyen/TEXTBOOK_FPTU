#include<stdio.h>

int countEvenInRange(void)
{
	int count = 0, i;
	int *ptr = &i;
	int rangeMin = -20, rangeMax = 40;
	for (*ptr = rangeMin; *ptr <= rangeMax; ++(*ptr))
	{
		if ((*ptr) % 2 == 0) ++count;
	}	
	return count;
}

int countEvenInRange_2(void)
{
	int count = 0, i;
	int *ptr = &i;
	int rangeMin = -20, rangeMax = 40;
	for (i = rangeMin; i <= rangeMax; i++)
	{
		if ((*ptr) % 2 == 0) ++count;
	}	
	return count;
}

int main()
{
	printf("%d", countEvenInRange());
	
	printf("%d", countEvenInRange_2());
}