#include <stdio.h>
#include <stdlib.h>
//42-DeleteArray
const int MAX = 100;
void inputArray(int arr[], int *size);
void outputArray(int arr[], int size);
int removeKey (int arr[], int *size, int key);
int removeKeyV2 (int arr[], int *size, int key);
int deletebyPos(int arr[], int *size, int pos);
int main()
{
    int arr[] = {3,1,2,3,5,4,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // xài hàm
    int amount = removeKey(arr,&size,3);
    // xem kết quả
    printf("\nAmount = %d \nArr: ",amount);
    outputArray(arr,size);
    return 0;
}
void inputArray(int arr[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i =0; i <= *size -1;i++){
        printf("\nNhap Arr [%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i =0; i <= size -1;i++){
        printf("%5d",arr[i]);
    }
}
int removeKey (int arr[], int *size, int key){
    int tmp[MAX];
    int sizeTmp = 0;
    int count = 0;
    for(int i =0; i <= *size -1; i++){// duyệt gốc
        if(arr[i] != key){// nếu pt != key thì nhét vào tmp
          tmp[sizeTmp] = arr[i];
          sizeTmp++;
        }else{
            count++;
        }
    }// vậy thì tmp chứa các pt khác key
    // bây giờ arr cpy tmp
    (*size) = 0;
    for(int i = 0; i<= sizeTmp -1;i++){
        arr[*size] = tmp[i];
        (*size)++;
    }
    return count;
}
int removeKeyV2 (int arr[], int *size, int key){
    int count = 0;
    for(int i = 0; i <= *size -1; i++){
        if(arr[i] == key){
            deletebyPos(arr,size,i);
            i--;
            count++;
        }
    }
}
int deletebyPos(int arr[], int *size, int pos){
     for(int i = pos; i <= *size -1; i++){
                arr[i] == arr[i + 1];
            }
            (*size)--;
}
