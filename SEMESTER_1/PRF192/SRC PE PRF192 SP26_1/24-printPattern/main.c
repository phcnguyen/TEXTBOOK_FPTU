#include <stdio.h>
#include <stdlib.h>
//24- printPattern
// nhập width và height
// height = 5
// width = 7
/*
*******
*     *
*     *
*     *
*******
*/
int main()
{
    int height;
    int width;
    printf ("\nNhap height: ");
    scanf("%d",&height);

    printf ("\nNhap width: ");
    scanf("%d",&width);    // height= 5
    for ( int h =1 ; h <= height; h ++){
        for ( int w =1 ; w <= width; w ++){  //width = 7
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
