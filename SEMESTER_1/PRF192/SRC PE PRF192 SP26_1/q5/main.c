#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int q5 (char str[]);
int spilce (char str[],int pos,int amount);
int main()
{
    char str[100] ="  xin chao ban  ";
    q5(str);
    printf("\nstr  : '%s'",str);
    return 0;
}
int spilce (char str[],int pos,int amount){
    int size =strlen(str);
    if(pos < 0 || pos > size -1) return 0;
    for(int i = pos; i<= size -1;i++){
        str[i] = str[ i +amount];
    }
    str[size - amount] = '\0';
}
int q5 (char str[]){
    for(int i = 0; i <= strlen(str)-1;i++){
        if(str[i] == 32 && str[i +1] == 32){
            spilce(str,i,1);
            i--;
        }
        if(str[0] == 32)spilce(str,0,1);
        if(str[strlen(str)-1] == 32) spilce(str,strlen(str)-1,1);
    }
}
