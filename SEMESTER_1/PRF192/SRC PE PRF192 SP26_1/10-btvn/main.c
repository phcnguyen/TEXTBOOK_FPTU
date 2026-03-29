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
     int sum = 0;
     for ( int i = start; i<= end; i++){
        if (i % 2 == 0){
            sum =sum +i;
        }
     }
     printf ("\nTong cac so chan la: %d",sum);
    return 0;
}
