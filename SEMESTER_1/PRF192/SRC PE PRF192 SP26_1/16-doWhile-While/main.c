#include <stdio.h>
#include <stdlib.h>
//16-doWhile-while
//loop
//for | do While  | while

int main()
{
    //MỘT
    /*
    do{
        command;
    }while(condition);
   */
   /*int i = 1;
   do{
    printf("\nI love you <3 %d",i); //dù cho điều kiện đúng hay không đúng thì vòng do While thì cũng sẽ làm 1 lần
    i++;
   }while(i <= 5);
   */
   //HAI
   // ép người dùng nhập 15
   /*
   int a;
   for (;;){
        printf("\nNhap a di: ");
        scanf("%d",&a);
        fflush(stdin);
        if (a == 15){
            break;
        }
   }
    */
    //BA
    /*
    int a;
    do {
        printf("\nNhap a di: ");
        scanf("%d",&a);
        fflush(stdin);
    }while( a != 15);
    */
    //while
    int i = 1;
    while ( i <= 5){
        printf("\nI love you %d",i);
        i ++;
    }
    return 0;
}
