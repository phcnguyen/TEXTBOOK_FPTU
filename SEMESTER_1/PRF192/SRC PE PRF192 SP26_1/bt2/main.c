#include <stdio.h>
#include <stdlib.h>
int Prime (void);
int main()
{
    /*
    int m = Prime();
    */
    printf("%d",Prime());
    return 0;
}
int Prime (void){
    /*
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    fflush(stdin);
    if (n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
*/
     int n;
     printf("\nNhap n:");
     scanf("%d",&n);

     return number % 2 == 0;
}
