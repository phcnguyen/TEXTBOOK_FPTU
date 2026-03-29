#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputElement (int array[], int *size);
void outputElement (int array[], int size);
int sumElement (int array[], int size);

int main()
{
    int arrayMain[MAX];
    int sizeMain = 0;
    inputElement(arrayMain,&sizeMain);
    outputElement(arrayMain,sizeMain);
    int sum = sumElement (arrayMain,sizeMain);
    printf("\nSum ne = %d",sum);
    return 0;
}
void inputElement (int array[], int *size){
    printf("\nNhap kich thuoc = ");
    scanf("%d",size);
    for ( int i = 0; i<= *size -1; i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputElement (int array[], int size){
    for ( int i = 0; i <= size -1;i++){
        printf("%5d",i);
    }
}
int sumElement (int array[], int size){
    int sum = 0;
    for (int i = 0;i <= size -1;i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
     return sum;
}
