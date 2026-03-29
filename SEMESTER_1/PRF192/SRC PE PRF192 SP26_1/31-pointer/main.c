#include <stdio.h>
#include <stdlib.h>
// 31- pointer

int main()
{
    int a = 20;//value , address
    // tạo biến z trỏ vào biến a
    int *z = &a;// con trỏ z trỏ vào vùng nhớ của a để điều khiền
    // in ra giá trị của a
    printf ("\ngia ti cua a %d",a);//20
    //in địa chỉ của a
    printf("\nDia chi cua a %u",&a);
    //in ra gia tri cua z
    printf("\nGia tri cua z ne %u",z);
    // in ra địa chỉ cua z
    printf ("\nDia chi cua z %u",&z);
    *z += 2;
    // a bị z diều khiển tăng 2
    printf ("\nGia tri cua a %d",a);
    return 0;
}
