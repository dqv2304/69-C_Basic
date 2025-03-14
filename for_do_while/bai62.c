#include <stdio.h>
#include <math.h>

int perfectNum(int a){
   if (a <= 0) return 0;

   int sum = 0;
   for (int i = 1; i <= a/2; i++){
    if (a % i == 0){
        sum += i;
        }
    }
    return (sum == a);
}

int main() {
    int a;
    printf("nhap so di nguoi dep: ");
    scanf("%d", &a);
    if (perfectNum(a)){
        printf("%d la so hoan hao", a);
    }
    else {
        printf("%d khong phai la so hoan hao", a);
    }
    
    return 0;
}
