//Write a program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);
    if ( b !=0 )
    {
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    }
    else
    {
    printf("Sum=%d, Diff=%d, Product=%d\n", a + b, a - b, a * b);
    }
    return 0;
}

