#include <stdio.h>
#include <stdlib.h>
int strLenght(char str[]);
int strCmp(char str[],char sub);
int charInStr(char str[], char key);
char delCharInStr(char str[],int pos);
int insertCharInStr(char str[], char key, int pos);
int insertStrInStr(char str[],char sub[],int pos);

int main()
{
    char str[100] = "abcde";
    char sub[100] = "abfd";
    //printf("\nResult = %d",strCmp(str,sub));
    //printf("\nResult = %d",charInStr(str,'c'));
    //elCharInStr(str,2);
    //printf("\nStr = %s",str);
    //insertCharInStr(str,'T',2);
    //printf("\nStr = %s",str);
    //insertStrInStr(str,"TEC",2);
    printf("\nStr = %s",str);


    return 0;
}
int insertStrInStr(char str[],char sub[],int pos){
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    for(int i = size; i>= pos; i--){
        str[i + sizeS] = str[i];
    }
    str[size + sizeS] = '\0';
    // nhét sub vào khoản trống trong str từ pos
    for(int i = 0; i <= sizeS -1;i++){
        str[pos] = sub[i];
        pos++;
    }
}
int insertCharInStr(char str[], char key, int pos){

    int size = strLenght(str);
    if(pos < 0 || pos > size) return 0;
    for(int i= size -1; i >= pos;i--){
        str[i + 1] = str[i];
    }
    str[size + 1] = '\0';
    str[pos] = key;
    return 1;
}
char delCharInStr(char str[],int pos){
    int size = strLenght(str);
    int Ch = str[pos];
    for(int i = pos; i<= size -1;i++){
        str[i] = str[i +1];
    }
    str[size -1] = '\0';// lùi \0 vào 1 ô
    return Ch;
}

int strLenght(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
int charInStr(char str[], char key){
    int size = strLenght(str);
    for(int i =0; i <= size -1;i++){
        if(str[i] == key) return i;
    }
    return -1;
}
/*
int strCmp(char str[],char sub[]){
    //1.tìm sizeMin
    //2.giá trị
    //3.kích thước
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    int sizeM = size < sizeS ? size : sizeS;
    for(int i = 0; i<= sizeM -1;i++){
        if(str[i] > sub[i]) return 1;
        else if(str[i] < sub[i]) return -1;
    }
     //3.kích thước
     if(size > sizeS) return 1;
     else if(size < sizeS) return -1;
     else return 0;
}
*/
