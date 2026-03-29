#include <stdio.h>
#include <stdlib.h>
//32-inputOutputArray
int main()
{
    int arr[100];
    int size;
    printf("\nNhap kich thuoc: ");
    scanf("\n%d",&size);//6
    for ( int i = 0 ;i <= size -1; i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("\n%d",&arr[i]);
    }
    //in mảng đã lưu
    printf("\nMang vua nhap la: ");
    for ( int i = 0;i <= size -1; i++){
        printf("%5d",arr[i]);
    }
    return 0;
}
