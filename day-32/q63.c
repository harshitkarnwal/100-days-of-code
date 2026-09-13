#include <stdio.h>

int main()
{
    int n1, n2, i;
    int a[100], b[100], merged[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        merged[i] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        merged[n1 + i] = b[i];
    }

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
