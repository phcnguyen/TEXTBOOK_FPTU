#include <stdio.h>
#include <stdlib.h>
//27-computeAreaV4
int computeAreaV4 (int width,int height);
int main()
{
    int w ,h;
    printf("\Nhap w di:");
    scanf("%d",&w);
    printf("\Nhap h di:");
    scanf("%d",&h);
    int s = computeAreaV4 (w ,h);
    printf("\Dien tich ne %d",s)
    return 0;
}
int computeAreaV4 (int width,int height){
         return width * height;
}
//btvn làm lại checkPrime bằng 4V
// hint return :1 true | 0 : False
