#include <stdio.h>

int main()
{
    int n, arr[100], i, key;
    int low, high, mid, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (index != -1)
    {
        printf("Found at index %d\n", index);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
