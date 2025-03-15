#include <stdio.h>
#include <math.h>

unsigned long long giaithua(int n){
    unsigned long long ketqua = 1;
    for (int i = 1; i <= n; i++){
        ketqua *= i;
    }
    return ketqua;
}

int main() {
    int n;
    printf("Nhap so di nguoi dep: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nhap so duong di nguoi dep\n");
    }
    else {
        double sum = 0;
        for (int j=1;j<=n;j++) {
            sum += (double)1/giaithua(j);
        }

    printf("%.4lf ", sum);
    }
    return 0;
}




