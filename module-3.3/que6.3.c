// WAP to make multiplication of two matrix using 2-D Array 
#include <stdio.h>
void multiplymatrix(int a1,int b1,int a2,int n2,int mat1[a1][b1],int mat2[a2][b2],int result[a1][b2]) {
    if (b1 != a2) {
        printf("Invalid matrix dimensions for multiplication.\n");
        return;
    }

    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < b2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < b1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int a1, b1, a2, b2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &a1, &b1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &a2, &b2);
    int mat1[a1][b1], mat2[a2][b2], result[a1][b2];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < b1; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < a2; i++) {
        for (int j = 0; j < b2; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    multiplymatrix(a1, b1, a2, b2, mat1, mat2, result);
    printf("\nMatrix 1:\n");
    displaymatrix(a1, b1, mat1)
    printf("\nMatrix 2:\n");
    displaymatrix(a2, b2, mat2);
    printf("\nProduct of the matrices:\n");
    displaymatrix(a1, b2, result);
}