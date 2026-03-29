#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray (int array[], int *size);
void outputArray (int array[], int size);
int sumEven (int array[], int size);
int main()
{
    int arrayMain [MAX];
    int sizeMain = 0;
    inputArray(arrayMain,&sizeMain);
    outputArray(arrayMain,sizeMain);
    int sum = sumEven(arrayMain,sizeMain);
    printf("\nSum = %d",sum);
    return 0;
}
void inputArray (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for( int i = 0;i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray (int array[], int size){
    for(int i = 0; i <= size -1;i++){
        printf("%5d",i);
    }
}
int sumEven (int array[], int size){
    int sum = 0;
    for(int i =0; i<= size -1; i++){
        if (i % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
