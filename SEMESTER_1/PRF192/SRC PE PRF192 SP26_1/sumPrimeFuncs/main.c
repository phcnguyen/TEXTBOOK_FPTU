#include <stdio.h>
#include <stdlib.h>
const MAX = 100;
void inputArray (int array [], int *size);
void outputArray (int array [],int size);
int sumPrime (int array[],int size);

int main()
{
    int arrayMain [MAX];
    int sizeMain = 0;
    inputArray (arrayMain,&sizeMain);
    outputArray(arrayMain,sizeMain);
    printf("\nTong ne = %d",sumPrime(arrayMain,sizeMain));
    return 0;
}
void inputArray (int array [], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for (int i =0; i <= *size -1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",array[i]);
    }
}
void outputArray (int array [],int size){
    for(int i = 0; i <= size -1; i++){
        printf("%5d",i);
    }
}
int sumPrime (int array[],int size){
    int sum = 0;
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    if(n >= 2){
        for(int i =0; i <= n-1;i++){
            int isPrime = 1;
            if ( n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if ( isPrime == 1){
            sum += i;
        }
    }
    return sum;
}
