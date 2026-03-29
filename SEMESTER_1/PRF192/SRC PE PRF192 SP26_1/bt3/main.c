#include <stdio.h>
#include <stdlib.h>
int Time( int n);
int main()
{
    /*
    int n;
    char buffer;
    do{
        printf("\nNhap n: ");
        scanf("%d",&n);
        scanf("%c",&buffer);
        fflush(stdin);
        if ( buffer != 10 || n< 0){
            printf("\nNhap lai ikk :");
        }
    }while( buffer != 10 || n< 0);
    int m = Time(n);
    */
    printf("\nSum ne = %d",Time(345));
    return 0;
}
int Time (int n){
     int sum = 0;
    while( n != 0){
        sum += n%10;
        n/= 10;
    }
    return sum;
}
