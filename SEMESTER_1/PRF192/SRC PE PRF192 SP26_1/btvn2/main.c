#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h,p,s;
    printf("\nNhap n:");
    scanf("%d",&n);
    h = n/3600;
    p = (n%3600)/60;
    s = (n%3600)%60;
    printf("\So h ne %d:%d:%d",h,p,s);
    return 0;
}
