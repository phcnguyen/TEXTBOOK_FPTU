#include <stdio.h>

/* =====================
   Calculator Functions
   ===================== */

typedef int (*Operation)(int, int);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b)
{
    if (b == 0) return 0;
    return a / b;
}

void calculate(int a, int b, char op, int* result);

void calculate(int a, int b, char op, int* result)
{
    switch (op)
    {
        case '+':
            *result = add(a, b);
            break;
        case '-':
            *result = sub(a, b);
            break;
        case '*':
            *result = mul(a, b);
            break;
        case '/':
			*result = divide(a, b);
			break;
        default:
            *result = 0;
            return;
    }
}

/* =====================
   Main Functions
   ===================== */

int main()
{
    int a = 446;
    int b = 223;
    int result = 0;
    
    char operators[] = { '+', '-', '*', '/' };

    for (int i = 0; i < 4; i++)
    {
		calculate(a, b, operators[i], &result);
		printf("%i %c %i = %i \n", a, operators[i], b, result);
    }
    
    getchar();
    
    return 0;
}