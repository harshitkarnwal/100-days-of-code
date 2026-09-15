#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read matrix dimensions
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 0;
    }
    
    int matrix[rows][cols];
    int transpose[cols][rows];
    
    // Read original matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Compute transpose (swap row and column indices)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Print the transposed matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d", transpose[i][j]);
            if (j < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
