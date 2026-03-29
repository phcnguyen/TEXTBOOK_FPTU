#include <stdio.h>
#include <stdlib.h>
//33-sumAllElementInArray
//hàm nhập và xuất mảng
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int size);
int sumArray (int array[],int size);
//viết hàm tính tổng các phần tử trong
// viết hàm tính trung bình cộng
float avgArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    inputArray(arrMain,&sizeMain);
    outputArray(arrMain,sizeMain);
    int sum = sumArray(arrMain,sizeMain);
    printf("\nSum = %d",sum);
    printf("\nAVG = %f",avgArray(arrMain,sizeMain));
    return 0;
}
void inputArray (int array[], int *size){
    printf ("\nNhap kich thuoc: ");
    scanf("%d",size);
    for ( int i = 0; i <= *size -1; i++){
        printf("\nNhap array[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int size){
    for ( int i = 0; i <= size -1;i++){
        printf("%5d",i);
    }
}
int sumArray (int array[],int size){
    int sum = 0;
    for ( int i = 0; i <= size-1;i++){
        sum += array[i];
    }
    return sum;
}
float avgArray(int array[], int size){
    return (float)sumArray(array,size)/size;
}
