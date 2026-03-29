#include <stdio.h>
#include <stdlib.h>
//27-computeAreaV3
int computeAreaV3 ( void);
int main()
{
    int s = computeAreaV3 ();
    printf("\ndien tich hinh chu nhat la %d",s);
    return 0;
}
int computeAreaV3 ( void){
 int width ,height;
  printf("\Nhap width di:");
  scanf("%d",&width);
  printf("\Nhap height di:");
  scanf("%d",&height);
  return width * height;
}
