#include <stdio.h>
#include <stdlib.h>
// nhận vào n , tính n giai thừa , nhận vào n -> nhận từ mình -> k xin -> có đầu và0
//  tính mà không in tức là có kết quả ném ra ngoài -> return
int Factorial (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    printf("\nKet qua ne %d",Factorial(n));
    return 0;
}

int Factorial (int n){
    int result =1;
    for ( int i = 1; i <= n;i++){
        result *= i;
    }
    return result;
}

int FactorialV2 (int n){
    if ( n == 1 || n == 0) return 1;
    return n * FactorialV2( n -1 );
}
