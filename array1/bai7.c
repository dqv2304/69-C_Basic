#include<stdio.h>

int main (){
    int a[1000],n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
   
    int temp = 0;
    for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
            if (a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i<n; i++)
        printf("%d  ", a[i]);

    return 0;

}
