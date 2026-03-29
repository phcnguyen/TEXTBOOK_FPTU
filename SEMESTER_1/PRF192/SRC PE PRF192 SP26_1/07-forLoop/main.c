#include <stdio.h>
#include <stdlib.h>
// 07-forLoop
// repeat and reuse
// lặp lại và dùng lại
int main()
{
   /*
    for ( khời đầu; điều kiện thoát; bước nhảy ){
                 command;
    }
   */
   // in ra tên thầy 10 lần
   // bắt đầu từ số 1
   // int i ; cách code này nếu muons biết biến dạng là bao nhiêu
   /*for ( int i = 1; i <= 10; i++){
       printf ("\n%d Vu Tien Dat",i);
   }
   //cách code này biến i được giải phóng
   */
   int start, end ;
   printf ("\nNhap start: ");
   scanf ("%d",&start);
   printf ("\nNhap end: ");
   scanf ("%d",&end);
   /*if ( start > end){
    int tmp = start;
        start = end;
        end = tmp;
    for ( int i = start; i <= end ; i++){
        printf("%5d",i);
    }*/
    // in ra màn hình các số chẵn trong khoảng
    printf ("\nCac so chan trong khoang la: ");
    for ( int i = start;i <= end;i++){
        if (i%2 == 0){
            printf("%5d",i);
        }
    }
   return 0;
}
