#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(double, double);

int main()
{
    printf("Sum: %4i\n", sum(5, 7));
    printf("Sub: %4i\n", sub(10, 15));
    printf("Mul: %4i\n", mul(2, 4));
    printf("Sub: %.2lf\n", div(10.0, 3.0));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}