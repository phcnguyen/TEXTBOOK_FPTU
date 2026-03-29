#include <stdio.h>
#include <stdlib.h>
int Fibonachi ( int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    int result = Fibonachi (n);
    printf ("\n%d so thu tu ne %d", result,n);
    return 0;
}
int Fibonachi ( int n){
    int result = 0;
    int pre = 0;
    int curr = 1;
    for ( int i = 1; i <= n -1;i ++){
        result = pre + curr;
        pre = curr;
        curr = result;
    }
    return result;
}
