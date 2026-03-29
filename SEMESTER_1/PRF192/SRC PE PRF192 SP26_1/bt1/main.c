#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    printf("\Nhap start: ");
    scanf("%d",&start);
    printf("\Nhap end: ");
    scanf("%d",&end);
    if ( start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    callTeam(start,end);
    return 0;
}
void callTeam ( int start, int end){
    if ( start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0;
    for ( int i = start; i <= end; i ++){
        sum = sum + i;
    }
    printf ("\nSum = %d",sum);
}
