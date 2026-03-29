#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArr (int arr[] ,int *size);
void outputArr (int arr[] ,int size);
int compareArr (int arr1[], int size1, int arr2[],int size2);

int main()
{
    int arrA [100] ={2,4,6,8};
    int sizeA = sizeof(arrA)/sizeof(arrA[0]);
    int arrB [100] = {2,4,6,8,10};
    int sizeB = sizeof(arrB)/sizeof(arrB[0]);
    int result = compareArr(arrA,sizeA,arrB,sizeB);
    if(result > 0){
        printf("\nArrA > ArrB");
    }else if(result < 0){
       printf("\nArrA < ArrB");
    }else{
        printf("\nArrA = ArrB");
    }
    return 0;
}
void inputArr (int arr[] ,int *size){
    printf("\nNhap kich thuoc : ");
    scanf("%d",size);
    for(int i =0; i <= *size -1;i++){
        printf("\nNhap Arr [%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArr (int arr[] ,int size){
    for(int i =0;i <= size -1 ; i++){
        printf("%5d",arr[i]);
    }
}
int compareArr (int arr1[], int size1, int arr2[],int size2){
    int size = size1 < size2 ? size1 : size2;
    for(int i = 0; i<= size -1; i++){
        if(arr1[i] > arr2[i])return 1;
        else if(arr1[i] < arr2[i]) return-1;
    }
    if(size1> size2) return 1;
    else if(size1<size2) return -1;
        else return 0;
}
