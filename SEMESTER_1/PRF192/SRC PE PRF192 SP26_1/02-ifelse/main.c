#include <stdio.h>
#include <stdlib.h>
// 02- ifelse:cấu trúc rẽ nhánh
int main()
{
    /*
    if (condition){
        command
    } else if (condition){
               command
    }else{
    }
    */
    int car = 7;
    printf("\n sai gon ne");
    printf("\ncao toc lien khuong");
    //gặp cái biển báo
    if (car >= 7){
        printf ("\ndi pern");
    }else if (car ==7){
            printf ("\ndi sacom");}
    else {
        printf ("\ndi mimosa");
      }

// nói về điều kiện
// compairision operator : tóan tử so sánh
// == so sánh bằng
// != so sánh khác
// > < >= <=
// mathetic operator : toán tử toán học
// + - * / %
    // int a =10;
    // muốn tăng a lên 300 thì làm sao
    // a = a +300;
    // a = a + 4;
    // a += 4;
    // a = a + 1;//19
    // a += 1;//20
    // a ++//21
    // a -=10;//11
    // a --;//10
    // đi bar đi anh
    // yêu cầu:
    // tiền trên 300
    // tuổi từ 18
    int age = 25;
    int money = 100;
    /*
    if (money > 300){
        printf ("\nwelcom");
    }else{
        printf ("\ncut");
    }
    */
    //1 anh bảo vệ
    // &&: và đồng thời
    if ( age >= 18 && money >300){
        printf ("\nwelcom");
    }else{
         printf ("\nCut");
    }

    // logical operator : toán tử logic
    //and: && : 2 mệnh đề true là thỏa
    // && : đi tìm flase , có flase là dừng
    // or : || nó đi tìm true , có true là ngừng
    // & : chạy cho bằng hết mặc kệ false
    // ++b : là tăng trươc rồi mới so sánh
    // b++ : là so sánh trươc rồi tăng
    // nâng cao
    int a = 10;
    int b = 2;
    if (a ==10 && b++ >2){
        printf ("\nTrue a = %d, b = %d",a,b);
    }else{
         printf ("\nFalse a = %d, b = %d",a,b);
    }
    return 0;

}

