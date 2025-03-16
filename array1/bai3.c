#include <stdio.h>

int main() {
    int a[1000], n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0, nsum = 0, psum = 0, count_n = 0, count_p = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] < 0) {
            nsum += a[i];
            count_n++;
        } else {
            psum += a[i];
            count_p++;
        }
    }
    float navg = (count_n > 0) ? (float)nsum / count_n : 0;
    float pavg = (count_p > 0) ? (float)psum / count_p : 0;

    printf("Tong cua mang la: %d\n", sum);
    printf("Tong so nguyen am: %d\n", nsum);
    printf("Tong so nguyen duong: %d\n", psum);

    if (count_n > 0){
        printf("tb cong so nguyen am la: %.02lf\n", navg);
    }
    else 
        printf("ko co so nguyen am trong mang");
    
    if (count_p > 0)
        printf("tb cong so nguyen duong trong mang: %.02lf\n", pavg);
    else 
        printf("khong co so nguyen duong trong mang");

    return 0;
}
