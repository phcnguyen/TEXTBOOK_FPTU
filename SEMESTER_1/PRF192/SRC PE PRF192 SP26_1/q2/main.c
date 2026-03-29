#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArr (int arr[],int *size);
void outputArr (int arr[],int size);
int q2 (int arr[],int*size,int pos,int amount);
int main()
{
    int arr[100] = {2,0,1,4,3,6,5,7,9};
    int size = 9;
    printf("Arr : ",q2(arr,&size,2,5));
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
        printf("\n%5d",arr[i]);
    }
}
int q2 (int arr[],int*size,int pos,int amount){
    if(pos < 0 || pos > *size-1) return 0;
    for(int i = pos; i <= *size -1;i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;
    return 1;
}
