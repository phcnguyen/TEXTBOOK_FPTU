#include <stdio.h>
#include <stdlib.h>
//38-findInArray
const int MAX = 100;
void input(int array[], int *size);
void output(int array[], int size);
int findIndex (int arr[],int size,int key);
void findListIndex(int arr[], int size, int key, int arrR[],int *sizeR);
int main()
{
    int arr[MAX];
    int size;
    input(arr,&size);
    printf("\nMang vua nhap la :");
    output(arr,size);
    int number;
    printf("\nNhap so can tim :");
    scanf("%d",&number);
    //xài hàm
    /*//sài hàm findFirstIndex
    int pos = findFirstIndex(arr,size,number);
    if(pos == -1){
        printf("\n%d is not exist",number);
    }else{
        printf("\n%d is exist at %d",number,pos);
    }
    */
    int arrResult[MAX];
    int sizeResult = 0;
    //xài hàm findlist
    findListIndex(arr,size,number,arrResult,&sizeResult);
    if(sizeResult == 0){
        printf("\n%d is not exist",number);
    }else{
        printf("\n%d is exister at: ",number);
        output(arrResult,sizeResult);
    }
    return 0;
}
void input(int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i =0; i <= *size -1; i++){
        printf("\nNhap arr[%d] =",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int size){
    for(int i =0; i <= size -1; i++){
        printf("%5d",array[i]);
}
}
/*
 findFirstIndex
    hàm nhận vào arr và key
    tìm xem thử key có tồn tại trong arr không
    nếu có tồn tại return ném ra vì trí xuất hiện
    nếu không tồn tại return
 FindListIndex
     hàm nhận vào arr , key , arrR
     tìm xem key tồn tại trong vị trí nào của arr và lưu vào arrR
 ArrayinArray
*/
int findFirstIndex (int arr[],int size,int key){
    for(int i = 0; i <= size -1;i++){
        if(arr[i] == key){
            return i;
       }
    }
    //xuống dưới đây là arr không có key
    return -1;
}
void findListIndex(int arr[], int size, int key, int arrR[],int *sizeR){
    *sizeR = 0;
    for(int i = 0; i <= size -1; i++){
        if(arr[i] == key){
            arrR[*sizeR] = i;// nhét i vào arrR
            (*sizeR)++;
        }
    }
}
