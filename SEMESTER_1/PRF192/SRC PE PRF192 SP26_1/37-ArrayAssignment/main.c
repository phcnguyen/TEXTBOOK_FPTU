#include <stdio.h>
#include <stdlib.h>
//37-ArrayAssignment
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int size);
void cpyArray (int arrS[],int *sizeS,int arrM[],int sizeM );
void cpyArrayV2 (int arrS[],int *sizeS,int arrM[],int sizeM );
void concatArrayV2 (int arrS[],int *sizeS,int arrM[],int sizeM );
int main()
{
    int arr1[100] = {2,5,7};
    int size1 = 3;
    int arr2[100] = {3,1,2,7,5};
    int size2 = 5;
    printf("\nArr1: ");
    outputArray(arr1,size1);
    printf("\nArr2: ");
    outputArray(arr2,size2);
    //cpy arr1 cpy arr2
    concatArrayV2(arr1,&size1,arr2,size2);
    printf("\nsau cpy: ");
    printf("\nArr1: ");
    outputArray(arr1,size1);
    printf("\nArr2: ");
    outputArray(arr2,size2);
    return 0;
}
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int size){
    for(int i = 0; i <= size -1; i++){
        printf("%5d",array[i]);
    }
}
/*
     arrayassignment : gán mảng | dán mảng
     coppyArray : sao chép mảng
     concatArrayV2 : nối mảng
     nhét
      hàm nhận vào mảng 1 và mảng 2
      hàm nối mảng 2 vào mảng 1
      sau khi chạy xong mảng 1 sẽ thành mảng 1 + mảng 2;
      mảng 2 không thay đổi
      hàm nhận vào 3 mảng : mảng 1, mảng 2 và mảng 3
      sau khi hàm chạy
      mảng 3 = mảng 1 + mảng 2
      còn mảng 1 và mảng 2 không thay đổi
      B1: xóa mảng 3
      B2: mảng 1 nhét vào mảng 3
      B3: mảng 2 nhét vào mảng 3
     reverseArrayV1 : đảo ngược mảng;
     hàm nhận vào 1 mảng duy nhất hàm sẽ đảo ngược mảng đó rồi gán vào mảng chính
     nhớ tạo mảng giả
     V2:


     gán đối xứng | nhét


     coppy là gì ?
     a = 10
     a = b -> a copy b
           -> a bị thay đổi giá trị
           -> b giữ nguyên
           mảng A và mảng B
           mảng B sao chép mảng A
*/
// Gán dối xứng
void cpyArray (int arrS[],int *sizeS,int arrM[],int sizeM ){
    // duyệt thằng bị coppy
    for(int i = 0;i <= sizeM -1;i++){
        arrS[i] = arrM[i];
    }
    *sizeS = sizeM;
}
// nhét
// kỹ thuật nét copy
// 1. reset mảng đi copy
void cpyArrayV2 (int arrS[],int *sizeS,int arrM[],int sizeM ){
    *sizeS = 0;//xóa mảng đi copy
    for(int i =0; i <= sizeM -1;i++){
        arrS[*sizeS]= arrM[i];
        (*sizeS)++;
    }
}
void concatArrayV2 (int arrS[],int *sizeS,int arrM[],int sizeM){
    // *sizeS = 0; xóa mảng đi copy
    for(int i =0; i <= sizeM -1;i++){
        arrS[*sizeS]= arrM[i];
        (*sizeS)++;
}
}
