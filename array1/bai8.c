#include<stdio.h>

void ghepmang (int a1[], int size1, int a2[], int size2, int merged[]){
    int i=0, j=0, k=0;
    while (i < size1 || j < size2){
        if (j == size2 || (i < size1 && a1[i] < a2[j])){
            merged[k++] = a1[i++];
        } else {
            merged[k++] = a2[j++];
        }
    }
}
int main() {
    int size1, size2;
    
    printf("Nhập số phần tử của mảng 1: ");
    scanf("%d", &size1);
    int a1[size1];
    printf("Nhập các phần tử của mảng 1: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &a1[i]);
    }
    
    printf("Nhập số phần tử của mảng 2: ");
    scanf("%d", &size2);
    int a2[size2];
    printf("Nhập các phần tử của mảng 2: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &a2[i]);
    }
    
    int merged[size1 + size2];
    ghepmang(a1, size1, a2, size2, merged);
    
    printf("Mảng sau khi gộp: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}
