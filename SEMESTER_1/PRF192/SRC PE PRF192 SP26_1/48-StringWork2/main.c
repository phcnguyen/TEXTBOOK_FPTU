#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//48-StringWork2
int spilce (char str[], int pos ,int amount);
void trim (char str[]);
void validnam (char str[]);
void reWord (char str[]);
int main()
{
    char str[100] = " ho minh giau ";
    validnam(str);
    //reWord(str);
    printf("\n'%s'",str);
    return 0;
}
int spilce (char str[], int pos ,int amount){
    if(pos < 0 || pos > strlen(str)) return 0;
    for(int i = pos; i <= strlen(str) -1;i++){
        str[i] = str[ i + amount];
    }
    str[strlen(str)-amount] = '\0';
}
void trim (char str[]){
    for(int i = 0; i <= strlen(str) -1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            spilce(str,i,1);
            i--;
        }
        if(str[0] == 32) spilce(str,0,1);
        if(str[strlen(str)-1] == 32){
            spilce(str,strlen(str)-1,1);
        }
    }
}
void validnam (char str[]){
    trim(str);
    strlwr(str);
    int size = strlen(str);
    for(int i = 0; i <= size -1;i++){
        if(str[i] == 32){
            if(str[i + 1] >= 'a' && str[i + 1] <= 'z'){
                str[i+1] -= 32;
            }
        }
        if(str[0] >= 'a' && str[0] <= 'z'){
            str[0] -= 32;
        }
    }

}
void reWord (char str[]){
    int pos = 0;
    int size = strlen(str);
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strrev(str);
    while(pos < size -1){
        tmp[0] = '\0';
        sizeTmp = 0;
        for(int i =pos ; i<= size -1;i++){
            pos++;
            if(str[i] != 32){
                tmp[sizeTmp] = str[i];
                sizeTmp++;
            }else break;
        }
        tmp[sizeTmp] = '\0';
        strrev(tmp);
        strcat(result,tmp);
        strcat(result," ");
    }
    trim(result);
    strcpy(str,result);
}
