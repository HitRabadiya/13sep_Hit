//WAP to make addition of two matrix using 2-D Array 
#include <stdio.h>
void addmatrix(int a, int b, int mat1[a][b], int mat2[a][b], int result[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void displaymatrix(int a, int b, int mat[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void main() {
    int a, b;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &a, &b);

    int mat1[a][b], mat2[a][b], result[a][a];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    addmatrix(a, b, mat1, mat2, result);

    printf("\nMatrix 1:\n");
    displaymatrix(a, b, mat1);

    printf("\nMatrix 2:\n");
    displaymatrix(a, b, mat2);

    printf("\nSum of the matrices:\n");
    displaymatrix(a, b, result);
}