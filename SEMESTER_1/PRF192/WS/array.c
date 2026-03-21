#include <stdio.h>

void input(int a[], int n);
void output(int a[], int n);
int isPrime(int a[], int n);

int main()
{
	int n = 4;
	int array[n];
	int i;
	
	input(array, n);
	output(array, n);
	
	printf("\nCount Prime: %d", isPrime(array, n));
}

void input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Array[%d]=%d\t", i, a[i]);
	}
}

int isPrime(int a[], int n) {
	int i, j, l;
	int isPrime;
	
	for (i = 0; i<n; i++)
	{
		if (a[i] < 2) 
		{
			continue;
		}
		
    	isPrime = 1;
    	
        for (j = 2; j * j <= a[i]; j++) 
		{
            if (a[i] % j == 0) 
			{
                isPrime = 0;
                break;
            }
        }
        
	    if (isPrime) l++;
	}
	
	return l;
}