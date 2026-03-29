#include <stdio.h>
#include <stdlib.h>
//27-computeAreaV2
void computeAreaV2 (int width,int height);
int main()
{
  int w ,h;
  printf("\Nhap w di:");
  scanf("%d",&w);
  printf("\Nhap h di:");
  scanf("%d",&h);
  computeAreaV2 (w ,h);

    return 0;
}
void computeAreaV2 (int width, int height){
  int s = width *height ;
  printf("\ndien tich hinh chu nhat la %d",s);

}
