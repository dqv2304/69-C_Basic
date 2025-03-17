#include<stdio.h>

void inMang(int a[3][3]){
    for (int i = 0; i< 3;i++){
        for (int j = 0; j< 3;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    // TH1
    int a1[3][3] = {
        {1,2,3},
        {2,3,4},
        {7,5,3},
    };

    printf("mang duoc khai bao san:\n");
    inMang(a1);

    // TH2
    int a2[3][3];
    printf("Nhap vao cac phan tu trong mang:\n");
    for (int i = 0; i<3;i++){
        for (int j = 0; j<3;j++){
            scanf("%d", &a2[i][j]);
        }
    }

    printf("\nMang duoc nhap tu ban phim:\n");
    inMang(a2);
    return 0;
}
