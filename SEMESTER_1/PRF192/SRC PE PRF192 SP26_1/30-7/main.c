#include <stdio.h>
#include <stdlib.h>
void printfOdd (void);
int main()
{
    printfOdd();
    return 0;
}
void printfOdd (void){
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    for ( int i =1; i <= n; i++){
        if ( i % 2 != 0){
            printf ("%5d",i);
        }
    }
}
