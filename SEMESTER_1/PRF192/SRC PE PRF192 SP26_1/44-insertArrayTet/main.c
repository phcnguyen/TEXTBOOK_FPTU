#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int arr[], int *size);
void outputArray(int arr[], int size);
int insertArrIntoArr(int arr[], int *size, int arrS[], int sizeS,int pos);
int main()
{
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arrS[] = {1,3,5};
    int sizeS = sizeof(arrS)/sizeof(arrS[0]);
    insertArrIntoArr(arr,&size,arrS,sizeS,2);
    printf("\nArr: ");
    outputArray(arr,size);
    return 0;
}
void inputArray(int arr[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i =0; i <= *size -1;i++){
 /       printf("\nNhap Arr [%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i =0; i <= size -1;i++){
        printf("%5d",arr[i]);
    }
}
int insertArrIntoArr(int arr[], int *size, int arrS[], int sizeS,int pos){
    for(int i = *size-1; i >= pos;i--){
        arr[i + sizeS ] = arr[i];
    }
    (*size) += sizeS;
    // nhet arrS vao cho trong
    for(int i = 0; i <= sizeS -1;i++){
        arr[pos] = arrS[i];
        pos++;
    }
}
