#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read dimensions: rows and columns
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }
    
    int matrix[rows][cols];
    int rowSums[rows];
    
    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate sum for each row and store in rowSums array
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }
    
    // Print row sums separated by space
    for (int i = 0; i < rows; i++) {
        printf("%d", rowSums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
