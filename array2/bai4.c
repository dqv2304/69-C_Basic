#include<stdio.h>

#define MAX 100

void getMatrix(int matrix[MAX][MAX], int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            printf("Nhap phan tu [%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void showMatrix(int matrix[MAX][MAX], int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int a[MAX][MAX], int b[MAX][MAX], int hang, int cot, int tong[MAX][MAX]){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            tong[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;   
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a, b, c;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX], tong[MAX][MAX];

    printf("Nhap so hang ma tran 1: \n");
    scanf("%d", &a);
    printf("Nhap so cot ma tran 1: \n");
    scanf("%d", &b);
    printf("Nhap so cot ma tran 2: \n");
    scanf("%d", &c);

    printf("Nhap ma tran 1: \n");
    getMatrix(matrix1, a, b);

    printf("Nhap ma tran 2: \n");
    getMatrix(matrix2, b, c);

    // check
    if (a == b && b == c) {
        sumMatrix(matrix1, matrix2, a, b, tong);
        printf("Tong 2 ma tran la: \n");
        showMatrix(tong, a, b);
    } else {
        printf("2 ma tran khong hop le.\n");
    }

    multiplyMatrix(matrix1, matrix2, result, a, b, c);
    
    printf("Ma tran 1: \n");
    showMatrix(matrix1, a, b);
    printf("Ma tran 2: \n");
    showMatrix(matrix2, b, c);
    
    printf("Tich 2 ma tran la: \n");
    showMatrix(result, a, c);

    return 0;
}
