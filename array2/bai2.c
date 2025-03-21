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

void sumMatrix(int a[MAX][MAX], int b[MAX][MAX], int tong[MAX][MAX], int hang, int cot){
    for (int i = 0; i< hang; i++){
        for (int j = 0; j < cot; j++){
            tong[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a, b;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], tong[MAX][MAX];

    printf("Nhap so hang: \n");
    scanf("%d", &a);
    printf("Nhap so cot: \n");
    scanf("%d", &b);

    printf("Nhap ma tran 1: \n");
    getMatrix(matrix1, a, b);

    printf("Nhap ma tran 2: \n");
    getMatrix(matrix2, a, b);

    sumMatrix(matrix1, matrix2, tong, a, b);

    printf("Ma tran 1: \n");
    showMatrix(matrix1,a,b);
    printf("Ma tran 2: \n");
    showMatrix(matrix2, a,b);

    printf("tong 2 ma tran: \n");
    showMatrix(tong, a, b);

    return 0;
}



