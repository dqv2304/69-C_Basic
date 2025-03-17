#include<stdio.h>

int main (){
    int a[1000],n,x;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("nhap x: "); scanf("%d", &x);
    int count = 0;
    for (int i = 0; i<n; i++){
        if (a[i] == x)
            count++;
    }
    printf("Phan tu %d xuan hien %d lan\n", x, count);

    return 0;

}
