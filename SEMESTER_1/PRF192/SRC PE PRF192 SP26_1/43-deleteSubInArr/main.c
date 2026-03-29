#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArr(int arr[], int *size);
void outputArr(int arr[],int size);
int splice (int arr[], int *size, int pos,int amount);
int arrInarr(int arr[], int size,int arrS[],int sizeS);
int arrInarrV2(int arr[], int size,int arrS[],int sizeS);
void delSubInarr(int arr[],int *size,int arrS[],int sizeS);
//buble
void sort(int arr[],int size);
int main()
{
    int array [] = {2,1,1,3,4,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int arrayS [] = {1,3,4};
    int sizeS = sizeof(arrayS)/sizeof(arrayS[0]);
    delSubInarr(array,&size,arrayS,sizeS);
    //splice(array,&size,1,4);
    //int result = arrInarrV2(array,size,arrayS,sizeS);
    //printf("\nResult = %d",result);
    //sort(array,size);
    printf("\nArr = ");
    outputArr(array,size);
    return 0;
}
void inputArr(int arr[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0; i <= *size-1;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArr(int arr[],int size){
    for(int i =0; i <= size-1;i++){
        printf("%5d",arr[i]);
    }
}

int splice (int arr[], int *size, int pos,int amount){
    if(pos < 0 || pos > *size -1) return 0;
    for(int i = pos; i <= *size -1;i++){
        arr[i] = arr[i + amount];
    }
    (*size)-= amount;
    return 1;
}

/*
int arrInarr(int arr[], int size,int arrS[],int sizeS){
    for(int i =0; i <= size-1;i++){// duyệt gốc
        if(arr[i] == arrS[0]){//có phần tử nào bằng pt đầu cảu arrS không?
            //so sánh đối xứng
            for(int j = 0;j <= sizeS-1;j++){
                if(arr[i + j] != arrS[j])break;
            else{
                if(j == sizeS -1)return i;
            }
        }
    }
}
    return -1;
}
*/
int arrInarrV2(int arr[], int size,int arrS[],int sizeS){
    int check = 0;
    for (int i =0; i<= size -1;i++){
        if(arr[i]== arrS[check]){
                if(check == sizeS -1)return i - check;
            check ++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
void delSubInarr(int arr[],int *size,int arrS[],int sizeS){
    while(splice(arr,size,arrInarrV2(arr,*size,arrS,sizeS),sizeS));
}
/*
 do{
    int pos = arrInarrV2(arr,*size,arrS,sizeS);
    int result = splice(arr,size,pos,sizeS);
}while(reslut == 1);
----->
do{
    int result = splice(arr,size,arrInarrV2(arr,*size,arrS,sizeS),sizeS);
}while(result == 1);
----->
do{
}while(splice(arr,size,arrInarrV2(arr,*size,arrS,sizeS),sizeS));
----->
while(splice(arr,size,arrInarrV2(arr,*size,arrS,sizeS),sizeS));
*/
void sort(int arr[],int size){
    for(int i = 0; i <= size -2;i++){
        for(int j = i + 1; j <= size -1;j++){
            if(arr[i] > arr[j]){// đổi xắp xếp thì đổi " > "
                //swap
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
