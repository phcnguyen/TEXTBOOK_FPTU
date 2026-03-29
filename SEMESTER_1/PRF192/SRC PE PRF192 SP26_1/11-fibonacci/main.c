#include <stdio.h>
#include <stdlib.h>

int main()
{
   int prev = 0;
   int curr = 1;
   int result = 1 ;
   int n;
   printf("\nNhap n: ");
   scanf("%d",&n);
    for ( int i = 1; i <= n -1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;

    }
    printf("%d la so o vi tri thu %d",result,n);
    return 0;
}
