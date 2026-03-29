#include <stdio.h>
#include <stdlib.h>
// 10-factorial
// nhập vào 1 số nguyên n
// tinh giai thừa của n (n!)
//vd:
//nhập n n = 5
//5! = 120
// hint
// 5! = 5x4x3x2x1

int main()
{
  int n;
  int result = 1;
  printf("\nNhap n:");
  scanf("%d",&n);
  for ( int i =1; i <= n;i ++){
    result *= i;
  }
  printf("\nd!: %d", result,n);
    return 0;
}
