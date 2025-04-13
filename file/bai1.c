#include <stdio.h>
#include <stdlib.h>

#define MAX 100 

void sumMatrix(int a[MAX][MAX], int b[MAX][MAX], int tong[MAX][MAX], int hang, int cot){
    for (int i = 0; i< hang; i++){
        for (int j = 0; j < cot; j++){
            tong[i][j] = a[i][j] + b[i][j];
        }
    }
}

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

void writeMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int tong[MAX][MAX], int hang , int cot){
    FILE *fp = fopen("tongmt.c", "w");
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

    fprintf(fp, "Ma tran tong: \n");
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            fprintf(fp, "%d\t", tong[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    printf("Da ghi ma tran vao tep.");
}
int main (){
    int matrix1[MAX][MAX], matrix2[MAX][MAX], tong[MAX][MAX];
    int hang, cot;
    
    printf("Nhap so hang va cot cua 2 ma tran: ");
    scanf("%d%d", &hang, &cot);
    printf("Nhap  ma tran 1: \n");
    getMatrix(matrix1, hang, cot);
    printf("Nhap ma tran 2: \n");
    getMatrix(matrix2, hang, cot);

    sumMatrix(matrix1, matrix2, tong, hang, cot);

    printf("Ma tran 1: \n");
    showMatrix(matrix1, hang, cot);
    printf("Ma tran 2: \n");
    showMatrix(matrix2, hang, cot);
    printf("tong 2 ma tran: \n");
    showMatrix(tong, hang, cot);

    writeMatrix(matrix1, matrix2, tong, hang, cot);

    return 0;

    
}
