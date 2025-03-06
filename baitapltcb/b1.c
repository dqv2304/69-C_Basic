#include <stdio.h>
#include<math.h>

int main() { 
	long long x;
	printf("Nhap so gi chua nguoi dep: ");
	scanf("%lld", &x);
	printf("%lld \n", (long long)pow(x,2));
	printf("%lld \n", (long long)pow(x,3));
	printf("%lld \n", (long long)pow(x,4));

    return 0;
}
