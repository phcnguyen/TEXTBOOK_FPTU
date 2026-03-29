#include <stdio.h>
#include <stdlib.h>
//36-getHighestMul2NumbArray
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int size);
int getHighestMul2NumbArray(int array[],int size);
int main()
{
    int arr [MAX];
    int size;
    inputArray(arr,&size);
    printf("\nMang vua nhap la");
    outputArray(arr,size);
    printf("\nTich lon nhat ne: %d",getHighestMul2NumbArray(arr,size));
    return 0;
}
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc :");
    scanf("%d",size);
    for(int i = 0 ; i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int size){
    for(int i = 0; i <= size -1;i++){
        printf("%5d",array[i]);
    }
}
int getHighestMul2NumbArray(int array[],int size){
    // giả định
    int max = array[0]*array[1];
    for(int i =0; i <= size -2;i++){
        for(int j = i+1;j <= size -1;j++){
            if (array[i] * array[j] > max){
                max = array[i] * array[j];
            }
        }
    }
    return max;
}
