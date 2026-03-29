#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int q4 (char str[],char key);
int main()
{
    char str[100] ="xin chao ban";
    int result = q4(str,'a');
    printf("result = %d",result);
    return 0;
}
int q4 (char str[],char key){
    for(int i = 0; i <= strlen(str) -1;i ++){
        if(str[i] == key) return i;
    }
    return -1;
}
