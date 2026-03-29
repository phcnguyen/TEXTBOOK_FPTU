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
     int count = 0;
     for ( int i = start; i <= end; i++){
         count = count +1;
     }
     printf ("/nco %d  so trong khoang",count);
    return 0;
}
}
