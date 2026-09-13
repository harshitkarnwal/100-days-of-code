#include <stdio.h>

int main()
{
    int n, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    result = n - (first * divisor) - last
             + (last * divisor) + first;

    printf("%d\n", result);

    return 0;
}
