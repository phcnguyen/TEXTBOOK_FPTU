#include <stdio.h>

int main()
{
	int score;
	printf("Input score: ");
	scanf("%i", &score);
	
	if(score >= 0 && score <= 10)
	{
		printf("The score is valid");
	}
	else
	{
		printf("The score is not valid");
	}
	
	return 0;
}