#include <stdio.h>
#include <stdlib.h>
int strLenght (char str[]);
void strUp (char str[]);
int spliceStr (char str[] ,int pos, int amount);
void removeDup(char str[]);
void removeKey (char str[],char key);
int strInStr (char str[], char sub[]);
void delSubInStr(char str[],char sub[]);
int main()
{
    char str[100] = "con chim cu cuu con chim cu";
    // xài hàm
    //strUp(str);
    //removeDup(str);
    //removeKey(str,'u');
    delSubInStr(str,"cu");
    //strInStr(str,sub);
    printf("\nStr = '%s'",str);
    //in hàm
    return 0;
}
int strLenght (char str[]){
    int i =0;
    while(str[i] != '\0') i++;
    return i;
}
void strUp (char str[]){
    int size = strLenght(str);
    for(int i = 0; i<= size -1;i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
}/*
nếu for có hành động xóa thì dùng trực tiếp
nếu for không có hành động xóa thì dùng gián tiếp
*/
int spliceStr (char str[] ,int pos, int amount){
    int size =strLenght(str);
    if(pos < 0 || pos > size -1) return 0;
    for(int i = pos; i <= size -1 ;i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = '\0';
    return 1;
}
void removeDup(char str[]){
    for(int i =0; i <= strLenght(str) -1;i++){
        for(int j = i +1 ; j<= strLenght(str) -1;j++){
            if(str[i] == str[j]){
                spliceStr(str,j,1);
                j--;
            }
        }
    }
}
void removeKey (char str[],char key){
    for(int i = 0; i<= strLenght(str) -1;i++){
        if(str[i] ==key){
            spliceStr(str,i,1);
            i--;
        }
    }
}
int strInStr (char str[], char sub[]){
    int check = 0;
    int size = strLenght(str);
    int sizeS = strLenght(sub);
    for(int i = 0; i <= size - 1;i++){
        if(str[i] == sub[check]){
            if(check == sizeS -1) return i - check;
            check++;
        }else{
            i -= check;
            check =0;
        }
    }
    return -1;
}
void delSubInStr(char str[],char sub[]){
    while(spliceStr(str,strInStr(str,sub),strLenght(sub)));
    //1 true 0 false    //pos             //amount
}
