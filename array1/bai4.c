#include<stdio.h>

int main (){
    int a[1000],n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (int i = 0; i<n; i++){
        if (a[i] > max){
            max = a[i];
        }
        else if(a[i] < min){
            min = a[i];
        }
    }
    printf("phan tu lon nhat la: %d \n", max);
    printf("pahn tu be nhat la: %d ", min);

}
