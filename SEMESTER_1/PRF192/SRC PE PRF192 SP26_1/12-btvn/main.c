#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end ;
     printf ("\nNhap start: ");
     scanf("%d",&start);
     printf ("\nNhap end: ");
     scanf("%d",&end);
     if ( start >end){
        int tmp = start;
        start = end;
        end = tmp;
     }
        int count = 0;
        for ( int i = start; i<= end; i++){
            if ( i % 2 != 0){
                count = count +1;
            }
        }
        printf("/nCo %d so le trong khoang la",count);
    return 0;
}
