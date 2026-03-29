#include <stdio.h>
#include <stdlib.h>
//27-computeAreaV1
void computeAreaV1 (void);
int main()
{
    computeAreaV1 ();
    return 0;
}
void computeAreaV1 (void){
  int w ,h;
  printf("\Nhap w di:");
  scanf("%d",&w);
  printf("\Nhap h di:");
  scanf("%d",&h);
  int s = w*h;
  printf("\ndien tich hinh chu nhat la %d",s);

}
