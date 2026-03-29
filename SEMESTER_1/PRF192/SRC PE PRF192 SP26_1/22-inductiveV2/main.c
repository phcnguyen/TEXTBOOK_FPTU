#include <stdio.h>
#include <stdlib.h>
// 22- inductiveV2
int main()
{
    int n;
    char buffer;
    do {
        printf ("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if ( buffer != 10 || n < 1){
            printf("\Nhap lai di pe: ");
        }
    }while ( buffer != 10 || n < 1);
    int sum = 0;
    float result;// nếu n = 4 thì sum = 10
    for ( int i =1 ; i <= n;i++){
        sum += i;
        result += (float)1/sum;
    }
    printf("\nResult = %f",result);
    return 0;
}
