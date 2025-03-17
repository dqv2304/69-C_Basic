#include<stdio.h>

int main (){
    int a[1000],n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
   
    for (int i = 0; i<n; i++){
        if (a[i] < 0 )
            a[i] = 0;
    }
    printf("Mang sau khi sua: ");
    for (int i=0;i<n;i++){
        printf("%d  ", a[i]);
    }

    return 0;

}
