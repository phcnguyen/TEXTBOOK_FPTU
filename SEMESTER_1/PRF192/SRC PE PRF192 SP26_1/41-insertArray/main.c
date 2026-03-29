#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void input (int array[], int *size);
void output (int array[], int size);
void insteadArray(int array[],int size,int key,int pos);
int insertArray(int array[],int *size,int pos, int key);
int deleteArray(int array[], int *size,int pos);
void checkPrime (int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    input(arr,&size);
    printf("\nArr: ");
    output(arr,size);
    int pos;
    int key;
/*    printf("\nNhap vi tri can thay the: ");
    scanf("%d",&pos);
    printf("\nNhap key: ");
    scanf("%d",&key);
*/
//  insteadArray(arr,size ,pos,key);
//  insertArray(arr,&size,pos,key);
//  int result= deleteArray(arr,&size,pos);
//  printf("\n%d la so da xoa: ",result);
    int reslut = checkAnna(arr,size);
    if(reslut == 1){
        printf("\nArr is Anna");
    }else{
        printf("\nArr is not Anna");
    }
    printf("\nMang thay the ne: ");
    output(arr,size);
    return 0;

}
void input (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i =0; i<= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void output (int array[], int size){
    for(int i =0; i<= size -1;i++){
        printf("%5d",array[i]);
    }
}
void insteadArray(int array[],int size,int key,int pos){
    array[pos] = key;
}
int insertArray(int array[],int *size,int pos, int key){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size -1;i >= pos; i--){
        array[i +1] = array[i];
    }
    array[pos] = key;
    (*size)++;
    return 1;
}
int deleteArray(int array[], int *size,int pos){
    int value = array[pos];
     for(int i = pos;i <= *size-1; i++){
        array[i] = array[i +1];
    }
    (*size)--;
    return value;
}
// checkAnna (arr[])
// hàm kiểm tra mảng có đối xứng không
// arr:
int checkAnna (int array[], int size){
    for(int i = 0; i <= size/2 -1; i++){
        if(array[i] != array[size-1-i]) return 0;
    }
    return 1;
}
