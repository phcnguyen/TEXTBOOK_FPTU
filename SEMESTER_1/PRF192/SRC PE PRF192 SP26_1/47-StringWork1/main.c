#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//47-stringWork1
int spilce (char str[],int pos, int amount);
void strLenght (char str[]);
void getalphaBet (char str[]);
void removeWove(char str[]);
void trim (char str[]);
int main()
{
    char str[100] ="xin_Chao11Em";
    //strlen(str);//10
    //strcpy(str1,str2);//str1 cpy str2
    //strcat(str1,str2);//str1 nối str2
    //strrev(str);//đảo ngược
    //strcmp(str1,str2);//str1 so sánh str2
    //strlwr(str)| strupr(str)
    getalphaBet(str);
    //removeWove(str);
    //trim(str);
    printf("\nStr = %s",str);

    return 0;
}
int spilce (char str[],int pos, int amount){
    if(pos < 0 || pos > strlen(str) -1) return 0;
    for(int i = pos ; i <= strlen(str) -1; i++){
        str[i] = str[i + amount];
    }
    str[strlen(str) - amount] = '\0';
    return 1;
}
void getalphaBet(char str[]){
    int size = strlen(str);
    for(int i = 0; i <= strlen(str) -1;i++){
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122){

        }else{
            spilce(str,i,1);
            i--;
        }
    }
}
void removeWove(char str[]){
    for(int i = 0; i <= strlen(str)-1;i++){
        if(str[i] == 'u' || str[i] == 'U' ||
           str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'a' || str[i] == 'A' ||
           str[i] == 'i' || str[i] == 'I'){
           spilce(str,i,1);
            i--;
           }
    }
}
void trim (char str[]){
    for(int i = 0; i <= strlen(str) -1;i++){
        if(str[i] == 32 && str[i + 1] == 32){
            spilce(str,i,1);
            i--;
        }
    }
    if(str[0] == 32)spilce(str,0,1);
    if(str[strlen(str)-1] == 32){
        spilce(str,strlen(str)-1,1);
    }
}
