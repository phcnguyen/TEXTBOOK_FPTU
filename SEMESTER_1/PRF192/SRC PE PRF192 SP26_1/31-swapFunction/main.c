 #include <stdio.h>
#include <stdlib.h>
//31-swapFunction
/*
viết hàm nhận vào n1 và n2 là hai biến số nguyên, hàm hoán vị giá trị hai biến n1 và n2
// hàm đầu ra như nào cũm được
*/
void swapV2 ( int *n1, int *n2);
int main()
{
    int numb1 = 10, numb2 = 20;
    swapV2 (&numb1,&numb2);
    printf("\nnumb1 = %d,numb2 = %d",numb1,numb2);
    return 0;
}
// pass by value: truyền tham trị
// tham khảo giá trị của agr
// para thay đổi agr không ảnh hưởng
void swapV2 ( int *n1, int *n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;

}
