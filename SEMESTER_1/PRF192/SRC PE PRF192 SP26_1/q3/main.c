#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArr (int arr[],int *size);
void outputArr (int arr[],int size);
int q3 (int arr[], int *size ,int key);
int deltbyPos (int arr[],int *size,int pos);
int main()
{
    int arr[100] ={2,1,5,3,4,5,6,5};
    int size = 7;
    q3(arr,&size,5);
    printf("\nArr: ");
    outputArr(arr,size);
    return 0;
}
void inputArr (int arr[],int *size){
    printf("\nNhap kich thuoc : ");
    scanf("%d",size);
    for(int i = 0; i <= *size -1;i++){
        printf("\nNhap Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArr (int arr[],int size){
    for(int i = 0; i <= size -1;i++){
        printf("\n%d",arr[i]);
    }
}
int deltbyPos (int arr[],int *size,int pos){
    if(pos < 0 || pos > *size -1) return 0;
    for(int i = pos ; i <= *size -1;i++){
        arr[i] = arr[ i +1];
    }
    (*size)--;
}
int q3 (int arr[], int *size ,int key){
    for(int i = 0; i<= *size -1;i++){
        if(arr[i] == key){
            deltbyPos(arr,size,i);
            i--;
        }
    }
}
