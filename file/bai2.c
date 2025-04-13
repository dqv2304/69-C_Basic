#include <stdio.h>

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

void writeMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int hang , int cot){
    FILE *fp = fopen("tichmt.c", "w");
    if (fp == NULL){
        printf("Error!");
        return;
    }
        // nhap ma tran 1
    fprintf(fp, "Ma tran 1: \n");
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            fprintf(fp, "%d\t", matrix1[i][j]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "\n");

    // nhap ma tran 2
    fprintf(fp, "Ma tran 2: \n");
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            fprintf(fp, "%d\t", matrix2[i][j]);
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "\n");

    fprintf(fp, "Ma tran tich: \n");
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            fprintf(fp, "%d\t", result[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    printf("Da ghi ma tran vao tep.");
}

int main (){
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int a,b,c;
    printf("Nhap so hang cua ma tran 1: \n");
    scanf("%d", &a);
    printf("Nhap so cot ma tran 1: \n");
    scanf("%d", &b);
    printf("Nhap so cot ma tran 2: \n");
    scanf("%d", &c);
    printf("nhap ma tran 1: \n");
    getMatrix(matrix1, a, b);
    printf("nhap ma tran 2: \n");
    getMatrix(matrix2, a, c);

    multiplyMatrix(matrix1, matrix2, result,a,b,c);

    printf("Ma tran 1: \n");
    showMatrix(matrix1, a, b);
    printf("Ma tran 2: \n");
    showMatrix(matrix2, a, c);
    printf("tich 2 ma tran: \n");
    showMatrix(result, a, c);

    writeMatrix(matrix1,matrix2, result, a,c);

    return 0; 
}
