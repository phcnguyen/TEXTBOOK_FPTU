
#include <stdio.h>
#include <stdlib.h>
//35-finMaxMinArray
const int MAX = 100;
void inputArray(int array[],int *size);
void outputArray(int array[],int size);
//hàm tìm số lớn nhất trong mảng
int findMaxArray(int array[],int size);
int findMinArray(int array[], int size);
// tính tích
int mulMaxMin(int array[],int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr,&size);
    printf("\nMang vua nhap");
    outputArray(arr,size);
    printf("\nMax ne: %d",findMaxArray(arr,size));
    printf("\nMin ne: %d",findMinArray(arr,size));
    printf("\nTich ne: %d",mulMaxMin(arr,size));
    return 0;
}
void inputArray(int array[],int *size){
    printf("\nNhap kich thuoc :");
    scanf("%d",size);
    for(int i =0; i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray(int array[],int size){
    for(int i = 0;i <= size -1;i++){
        printf("%5d",i);
    }
}
int findMaxArray(int array[],int size){
    //giả định array[0] là lớn nhất
    int max = array[0];
    for(int i = 0; i <= size-1;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
int findMinArray(int array[], int size){
    int min = array[0];
    for(int i = 0; i<= size -1;i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
int mulMaxMin(int array[],int size){
    int max = findMaxArray(array,size);
    int min = findMinArray(array,size);
    return min*max;
}
