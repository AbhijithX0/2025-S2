#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10], row, column, i, j;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &row, &column);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of matrix:\n");
    for (i = 0; i < column; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}