// Q77: Check if the elements on the main diagonal of a square matrix are distinct.
#include <stdio.h>
#define MAX 100

int main(void) {
    int n, a[MAX][MAX], i, j, distinct = 1;

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j]) distinct = 0;

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}