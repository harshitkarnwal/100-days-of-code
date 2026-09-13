#include <stdio.h>

int main()
{
    int n, arr[100], i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = n;

    for (i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
