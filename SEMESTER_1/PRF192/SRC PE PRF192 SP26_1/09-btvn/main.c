#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
       printf ("\nNhap start: ");
       scanf("%d",&start);
       printf ("\nNhap end: ");
       scanf("%d",&end);
        /*for ( int i = start; i <= end; i++){
           if ( i % 2 != 0){
            printf ("\nSo le ne = %d",i);
           }
        }
        */
        for ( int i = start; i <= end; i++){
             sum +=i;
        }
            if ( i % 2 == 0){

                printf ("\nTong cac so chan = %d ",i);
            }
        }

    return 0;
}
