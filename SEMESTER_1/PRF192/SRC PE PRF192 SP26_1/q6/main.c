#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void q6 (char str[]);
int spilce (char str[],int pos,int amount);
int q5 (char str[]);
void sort(char str[]);
int main()
{

    char str[100] = " Cuong Binh An Duong ";
    q6(str);
    printf("\nStr: '%s'",str);
    return 0;
}
void q6 (char str[]){
    int pos = 0;
    int size = strlen(str);
    char tmp[100] = "";
    int sizeT = 0;
    char result[100] ="";
    strrev(str);
    while(pos < size-1){
        sizeT =0;
        for(int i = pos; i <= size -1;i++){
            pos++;
            if(str[i] != 32){
                tmp[sizeT] = str[i];
                sizeT++;
            }else break;
        }
        tmp[sizeT] = '\0';
        strcat(result,tmp);
        strcat(result," ");
    }
    q5(result);
    strcpy(str,result);
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
int spilce (char str[],int pos,int amount){
    int size =strlen(str);
    if(pos < 0 || pos > size -1) return 0;
    for(int i = pos; i<= size -1;i++){
        str[i] = str[ i +amount];
    }
    str[size - amount] = '\0';
}
