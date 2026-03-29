#include <stdio.h>
#include <stdlib.h>
//hằng số là biến được gán giá trị lúc khởi tạo
// và không được reAssignment
//tên phải là UnderCore: MAX_SPEED
//32-inputOutputArrayFuncs
// viết hàm giúp nhập mảng bất kì
const int MAX = 100;//tạo hằng số
void inputArray(int array[], int *size);
void outputArray(int array[],int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    // dùng hàm nhập mảng
    inputArray(arrMain,&sizeMain);
    //dùng hàm xuất mảng
    printf("\nMang vua nhap la: ");
    outputArray(arrMain,sizeMain);
    return 0;
}
void inputArray(int array[],int *size){
    // xin kích thước
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for ( int i = 0;i <= *size -1; i++){
        printf("\nNhap array[%d] = ",i);
        scanf("%d",&array[i]);
        // con troe trong hàm
        // nhập => địa chỉ => tên
        // giá trị => *tên
    }
}
void outputArray(int array[],int size){
    for ( int i = 0; i<= size -1; i++){
        printf("%5d",array[i]);
    }
}
