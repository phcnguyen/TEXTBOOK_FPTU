#include <stdio.h>
#include <stdlib.h>
//43-removeduplicate
const int MAX = 100;
void inputArray(int arr[], int *size);
void outputArray(int arr[], int size);
int search (int arr[], int size, int key);
int deletebyPos(int arr[],int *size,int pos);
int removeDuplicate(int arr[], int *size);
int removeDuplicateV2(int arr[], int *size);
int main()
{
    int arr[] = {3,1,2,3,5,4,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // xài hàm
    int amount =removeDuplicate(arr,&size);
    // xem kết quả
    printf("\nAmount = %d \nArr: ",amount);
    outputArray(arr,size);
    return 0;
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
int search (int arr[], int size, int key){
    for(int i = 0; i <= size -1; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}
int removeDuplicate(int arr[], int *size){
    int tmp[MAX];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size-1; i++){
        int pos = search (tmp,sizeTmp,arr[i]);
        if(pos == -1){// nếu pt không tồn tại trong tmp thì nhét
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else{
            count++;
        }
    }//tmp chứa toàn những thằng k trùng lặp
    // cho arr cpy tmp
    (*size)= 0;
    for(int i = 0; i<= sizeTmp -1;i++){
        arr[*size]=  tmp[i];
        (*size)++;
    }
    return count;
}
int removeDuplicateV2(int arr[], int *size){
    int count = 0;
    for(int i = 0; i <= *size -2;i++){
        for(int j = i+1;j <= *size-1;j++){
            if(arr[i] == arr[j]){
                deletebyPos(arr,size,j);
                j--;
                count++;
            }
        }
    }
    return count;
}
int deletebyPos(int arr[], int *size, int pos){
     for(int i = pos; i <= *size -1; i++){
                arr[i] == arr[i + 1];
            }
            (*size)--;
}
