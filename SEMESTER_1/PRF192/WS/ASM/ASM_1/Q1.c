#include <stdio.h>
#include <stdlib.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int number01, number02;
  char op;
  double finalResult;
  printf("Enter number01 : "); scanf("%d",&number01);   
  printf("Enter number02 : "); scanf("%d%*c",&number02);   
  printf("Enter op (+ , - , * , /) : "); scanf("%c",&op);  
  //============================================================
  //Begin your statements here
  //Note: you must store the result into the finalResult variable
	if (op == '+') {
        finalResult = number01 + number02;
    } else if (op == '-') {
        finalResult = number01 - number02;
    } else if (op == '*') {
        finalResult = number01 * number02;
    } else if (op == '/') {
        if (number02 != 0) {
            finalResult = (double)number01 / number02;
        } else {
            finalResult = 0.0;
        }
    } else {
        finalResult = 0.0;
    }
  //End your statements
  //============================================================= 
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n");    
  printf("%.2lf",finalResult);  
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
