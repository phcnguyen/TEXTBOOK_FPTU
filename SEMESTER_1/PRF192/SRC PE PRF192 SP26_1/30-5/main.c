#include <stdio.h>
#include <stdlib.h>
int fibonachi (int n);
int fibonachiv2 (int n);
int main()
{
    printf ("\nvi tri ne %d ne",fibonachi(3));
    return 0;
}
int fibonachi (int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for ( int i = 1; i<= n-1; i++){
        result = prev + curr;
        prev = curr;
        curr= result;
    }
    return result;
}
int fibonachiv2 ( int n){
    if ( n == 2 || n ==1 ) return 1;
    return fibonachiv2 (n- 1) + fibonachiv2 ( n -2);
}
