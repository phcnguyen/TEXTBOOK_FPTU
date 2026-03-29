#include <stdio.h>
#include <stdlib.h>
int strLenght(char str[]);
void strcopy(char str[], char sub[]);
void strconcat(char str[],char sub[]);
void strRev(char str[]);
void strDiv(char str[],char sub[],int pos);
int main()
{
    char str[100] = "xinchaoBan";
    char sub[100] = "abc";
    //printf("\nNhap chuoi di: ");
    //scanf("%s",str);
    //gets(str);
    // xài hàm------
    //strDiv(str,sub,3);
    strRev(str);
    //strconcat(str," ");
    //strconcat(str,sub);
    //strcopy(str,sub);
    //kết quả------
    printf("\nStr: %s",str);
    printf("\nSub: %s",sub);
    return 0;
}
void strDiv(char str[],char sub[],int pos){
    // xóa sub
    sub[0] = '\0';
    // nhét str từ pos đến cuối vào sub
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    for(int i = pos; i<= size -1;i++){
        sub[sizeS] = str[i];
        sizeS++;
    }
    sub[sizeS] ='\0';
    str[pos] = '\0';// đặt \0 hạ độ dài str về pos
}
void strRev(char str[]){
    int size = strLenght(str);
    for(int i = 0; i <= size/2 -1;i++){
        char tmp = str[i];
        str[i] = str[size -1-i];
        str[size-1-i] = tmp;
    }
}
void strconcat(char str[],char sub[]){
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    for(int i = 0; i <= sizeS -1;i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';// đặt dấu kết thúc
}
void strcopy(char str[], char sub[]){
    //1.xóa Str
    str[0] = '\0';// đặt '\0' lên đầu sẽ xóa str
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    //2.nhét Sub vào Str
    for(int i =0; i <= sizeS -1;i++){
        str[size] = sub[i];
        size++;
    }
    str[size] = '\0';// đặt dấu kết thúc
}
int strLenght(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
