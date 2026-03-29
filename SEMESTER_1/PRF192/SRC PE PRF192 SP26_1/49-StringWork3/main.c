#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split (char str[],char key, char strList[][100],int *sizeL);
void join (char strList [][100], int sizeL,int key, char str[]);
void sort (char strList [][100],int sizeList);
int main()
{
    char strList [50][100];
    char str[100] ="vu@tien@dat@SE@2004";
    int sizeL = 0;
    split(str,'@',strList,&sizeL);
    for(int i = 0; i <= sizeL -1;i++){
        printf("\n'%s'",strList[i]);
    }
    join(strList,sizeL,'!',str);
    printf("\n'%s'",str);
    char namList [50][100] ={"An","Binh","Duong","Em","Manh"};
    int sizeList =5;
    sort(namList,sizeList);
    for(int i = 0; i <= sizeList -1;i++){
        printf("\n'%s'",namList[i]);
    }
    return 0;
}
void split (char str[],char key, char strList[][100],int *sizeL){
    *sizeL = 0;
    int pos = 0;
    char tmp[100] ="";
    int sizeTmp =0;
    int size = strlen(str);
    while(pos < size -1){
        sizeTmp = 0;
        for(int i = pos; i <= size -1;i++){
            pos++;
            if(str[i] != key){
                tmp[sizeTmp] = str[i];
                sizeTmp++;
            }else break;
        }
        tmp[sizeTmp] = '\0';
        strcpy(strList[*sizeL],tmp);
        (*sizeL)++;
    }

}
void join (char strList [][100], int sizeL,int key, char str[]){
    str[0] = '\0';
    char keyS[100] = "*";
    keyS[0] = key;
    for(int i = 0; i <= sizeL -1; i++){
        strcat(str,strList[i]);
        strcat(str,keyS);
    }
    str[strlen(str) -1] = '\0';

}
void sort (char strList [][100],int sizeList){
    for(int i = 0; i <= sizeList -2;i++){
        for(int j = i+1 ; j <= sizeList -1;j++){
            if(strcmp(strList[i],strList[j]) == 1){
                char tmp[100] = "";
                strcpy(tmp,strList[i]);
                strcpy(strList[i],strList[j]);
                strcpy(strList[j],tmp);
            }
        }
    }
}
