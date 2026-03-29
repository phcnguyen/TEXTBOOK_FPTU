#include <stdio.h>
#include <stdlib.h>
//40-divideArray
const int MAX = 100;
void input (int array[], int *size);
void output(int array[], int size);
void divideArrayV1 (int arrMain[], int *sizeMain, int pos,int arrSub[], int *sizeSub);
void divideArrayV2 (int arrM[], int sizeM, int pos, int arrSub1[], int *sizeSub1, int arrSub2[], int* sizeSub2);
int main()
{
    int arrA[100] = {2,4,6,8,10};
    int sizeA = 5;
    int arrB[100] = {1,2,3};
    int sizeB = 3;
    int arrC[100] = {4,5,6};
    int sizeC = 3;
    int pos;
    printf("\nNhap pos di: ");
    scanf("%d",&pos);
    divideArrayV2(arrA,sizeA,pos,arrB,&sizeB,arrC,&sizeC);
    printf("\nArrA : ");
    output(arrA,sizeA);
    printf("\nArrB: ");
    output(arrB,sizeB);
    printf("\nArrC :");
    output(arrC,sizeC);
    return 0;
}
void input (int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i <= *size -1; i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int size){
    for(int i =0; i<= size -1; i++){
        printf("%5d",array[i]);
    }
}
void divideArrayV1(int arrMain[], int *sizeMain, int pos,int arrSub[], int *sizeSub){
    *sizeSub = 0;
    for(int i = pos ; i <= *sizeMain -1 ; i++){
        arrSub[*sizeSub] = arrMain[i];
        (*sizeSub)++;
    }
    *sizeMain = pos;
}
void divideArrayV2 (int arrM[], int sizeM, int pos, int arrSub1[], int *sizeSub1, int arrSub2[], int* sizeSub2){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    // nhét arrMain (0 -> pos -1) vào sub1
    for(int i = 0; i <= pos -1;i++){
        arrSub1[*sizeSub1]= arrM[i];
        (*sizeSub1)++;
    }
    // nhét arrMain (pos -> cuối) vào sub2
    for(int i = pos; i <= sizeM -1;i++){
        arrSub2[*sizeSub2]= arrM[i];
        (*sizeSub2)++;
    }
    sizeM = pos;
}

