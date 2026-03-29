#include <stdio.h>
#include <stdlib.h>
//inductiveResult
// nhập vào 1 số nguyên dương n
// xuất ra màn hình kết quả của
// 1^n + 2^n + 3^n+...

//vd
// nhập n= 5
// phải tính xem 1^5 +2^5 + 3^5 +...
//in ra màn hình kết quả
int main()
{
   int n;
   printf("\nnhap n: ");
   scanf("%d",&n);
   // giả định n = 5
   int result = 0;
   for (int i = 1; i <= n;i++){
     result += pow (i,n);
   }
   //i = 1 2 3 4 5
     printf ("\nXuat ra ket qua: %d", result);
    return 0;
}
