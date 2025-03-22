#include<stdio.h>

long long fibo(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	int n;
	printf("Nhap so nguyen duong n di nguoi dep: ");
	scanf("%d", &n);
	
	if (n < 0) {
		printf("nhap so nguyen duong ma oi...");
	}
	else {
		printf("so fibonacci thu %d la: %lld",n, fibo(n));
	}	

	return 0;
}
