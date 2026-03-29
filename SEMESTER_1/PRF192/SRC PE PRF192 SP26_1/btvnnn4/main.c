#include <stdio.h>
#include <stdlib.h>
void sumEven (void);
int main()
{
    sumEven();
    return 0;
}
void sumEven (void){
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    fflush(stdin);
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            printf ("\n%d",i);
        }
      }

}
