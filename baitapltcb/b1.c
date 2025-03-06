#include <stdio.h>
#include<math.h>

int main() { 
	long long x;
	scanf("Nhap so gi chua nguoi dep: %lld", &x);
	printf("%lld \n", (long long)pow(x,2));
	printf("%lld \n", (long long)pow(x,3));
	printf("%lld \n", (long long)pow(x,4));

    return 0;
}
