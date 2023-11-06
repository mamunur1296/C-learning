#include <stdio.h>

// Function to add two matrices a and b and store the result in matrix c
void matrixAdd(int a[][100], int b[][100], int c[][100], int row, int col, int i, int j) {
    if (i == row) {
        return;
    }
    if (j == col) {
        matrixAdd(a, b, c, row, col, i + 1, 0); // Move to the next row
        return;
    }

    c[i][j] = a[i][j] + b[i][j]; // Add the corresponding elements

    // Move to the next column
    matrixAdd(a, b, c, row, col, i, j + 1);
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[100][100];
    int b[100][100];
    int c[100][100];

    // Input matrix a
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix b
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize matrix c with zeros
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = 0;
        }
    }

    // Call the function to add matrices a and b and store the result in c
    matrixAdd(a, b, c, row, col, 0, 0);

    // Print the result matrix c
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
