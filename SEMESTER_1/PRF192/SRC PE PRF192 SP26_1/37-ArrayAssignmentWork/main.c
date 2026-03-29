#include <stdio.h>
#include <stdlib.h>
//37-ArrayAssignmentWork
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int  size);
void concatArrayV1(int arr1[], int size1, int arr2[], int size2, int arr3[], int *size3);
void reverseArrayV1(int array[], int size);
void reverssArrayV2(int arr[], int size);
int main()
{
    int arr1[100] = {2,4,6};
    int size1 = 3;
    int arr2[100] = {1,3,5};
    int size2 = 3;
    int arr3[100] = {5,5,5,5,5};
    int size3 = 5;
    // in ra xem trước
    printf("\nArr1: ");
    outputArray(arr1,size1);
    printf("\nArr2: ");
    outputArray(arr2,size2);
    printf("\nArr3: ");
    outputArray(arr3,size3);
    // sài ahmf concatV1
    concatArrayV1(arr1,size1,arr2,size2,arr3,&size3);
    printf("\nKet qua sau khi noi ne : ");
    printf("\nArr1: ");
    outputArray(arr1,size1);
    printf("\nArr2: ");
    outputArray(arr2,size2);
    printf("\nArr3: ");
    outputArray(arr3,size3);
    // đảo ngược arr1
    reverseArrayV2(arr1,size1);
    printf("\nArr1 sao khi dao nguoc: ");
    outputArray(arr1,size1);
    return 0;

}
/*
     concatArrayV1
     reverseArrayV1
     reverssArrayV2
*/
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i <= *size -1; i++){
        printf("\nNhap arr[%d] =",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int  size){
    for(int i =0; i <= size -1; i++){
        printf("%5d",array[i]);
    }
}
void concatArrayV1(int arr1[], int size1, int arr2[], int size2, int arr3[], int *size3){
    *size3 = 0;// xóa arr3
    // nhét mảng 1 vào 3
    for(int i =0; i <= size1 - 1;i++){
        arr3[*size3] = arr1[i];
        (*size3)++;
    }
    // nhét mảng 2 vào mảng 3
    for(int i =0; i <= size2 - 1;i++){
        arr3[*size3] = arr2[i];
        (*size3)++;
}
}
void reverseArrayV1(int arr[], int size){
    int arrTmp[MAX];
    int sizeTmp = 0;// tạo mảng tmp không có phần tử nào;
    // nhét ngược arr vào arrTmp
    for(int i = size -1; i >= 0; i--){
        arrTmp[sizeTmp]= arr[i];
        sizeTmp++;
    }
    // chép đối xứng arrTmp vào Arr
    for(int i = 0; i <= sizeTmp -1; i++){
        arr[i] = arrTmp[i];
    }
}
void reverseArrayV2(int arr[], int size){
    for(int i = 0; i <= size/2 -1; i++){
        int tmp = arr[i];
        arr[i] = arr[size -1 -i];
        arr[size -1 -i] = tmp;
    }
}
