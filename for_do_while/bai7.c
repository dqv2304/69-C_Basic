#include <stdio.h>
#include <math.h>

int main() {
   int n;
   printf("Nhap so di nguoi dep: ");
   scanf("%d", &n);

   double sum = 0;
   for (int i=1;i<=n;i++) {
        sum += (double)1/i;
   }

   printf("%.4lf ", sum);
 
    return 0;
}




