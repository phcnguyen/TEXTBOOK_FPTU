#include <stdio.h>
#include <stdlib.h>
//15-inputRightForm
// Nhập vào 1 số
// nếu không phải số nguyên thì chửi, ép nhập lại

int main()
{
    int number;
    char buffer;

    do {
        printf("\nNhap number: ");
        scanf("%d",&number);
        scanf("%c",&buffer);
        fflush(stdin);
        if (buffer != 10){
            printf("\n do you know input a number ?");
        }
    }while(buffer != 10);
    return 0;
}
//1. sumPrime
// tính tổng nhập start và end tính tổng các số nguyên tố trong khiangr từ start đến end
//2. timeCaculation
//Nhập vài h phút giấy in theo format
//vd: s = 4700
// 1:18:20
// hint: / | % | %02d
