#include <stdio.h>
#include <stdlib.h>
//34-sumArray
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int size);
//viết hàm tính tổng các phần tử chẵn trong mảng
int sumEvenArray(int array[],int size);
// viết hàm tính tổng các phần tử ở vị trí chẵn trong mảng
int sumIndexEvenArray (int array[], int size);
//viết hàm tính tổng các số nguyên tố trong mảng
int sumPrimeArray(int array[], int size);
//cách 2 : tách nhỏ hàm
int checkPrime (int number);
int sumPrimeArrayC2(int array[], int size);
int main()
{
    int arr[MAX];// tạo mảng có 100 phần từ từ arr[0] -> arr[99]
    int size;
    inputArray(arr,&size);
    printf("\Mang vua nhap la ");
    outputArray(arr,size);
    printf("\nSum = %d",sumEvenArray(arr,size));
    printf("\nSum ne = %d",sumIndexEvenArray(arr,size));
    printf("\nSo nguyen to ne: %d",sumPrimeArray(arr,size));
    printf("\nSum so nguyen to ne: %d",sumPrimeArrayC2(arr,size));
    return 0;
}
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0;i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int size){
    for(int i = 0;i <= size-1;i++){
        printf("%5d",i);
    }
}
int sumEvenArray(int array[],int size){
    int sum = 0;
    for(int i = 0; i <= size-1;i++){
        if(array[i] % 2 ==0){
            sum += array[i];
        }
    }
    return sum;
}
int sumIndexEvenArray (int array[], int size){
      int sum = 0;
      for(int i = 0; i <= size-1;i++){
        if(i % 2 ==0){
            sum += array[i];
        }
    }
    return sum;
}
int sumPrimeArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i<= size -1;i++){
        //array[i]: is prime ?
        int isPrime = 1;
        if(array[i] >= 2){
            for(int j = 2 ; j <= array[i]-1;j++){
                if(array[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if ( isPrime == 1){
                sum += array[i];
            }
        }
    }
    return sum;
}
int checkPrime (int number){
    if( number >= 2){
       for(int i = 2 ; i<= number -1;i++){
        if ( number % i == 0){
            return 0;
        }
       }
       return 1;
    }else{
        return 0;
    }
}
int sumPrimeArrayC2(int array[], int size){
    int sum =0;
    for(int i = 0; i<= size -1;i++){
        if(checkPrime(array[i]) == 1){
            sum +=array[i];
        }
    }
    return sum;
}
