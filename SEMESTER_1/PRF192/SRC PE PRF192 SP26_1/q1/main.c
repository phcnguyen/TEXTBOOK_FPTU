#include <stdio.h>
#include <stdlib.h>
float q1 (int number);
int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    float result = q1(number);
    printf("\nKet qua ne :%f",result);
    return 0;
}
float q1 (int number){
    int sum = 0;
    float result = 0;
    for(int  i = 1;i <= number;i++){
        sum ++;
        result += (float)1.0/sum;
    }
    return result;
}
