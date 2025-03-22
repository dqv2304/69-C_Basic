#include<stdio.h>

long long giaiThua(int n){
	long long  result = 1;
	for (int i = 1; i <= n; i++){
		result *=i;
	}
	return result;
}

int main(){
	int n;
	printf("Nhap so n di nguoi dep: ");
	scanf("%d", &n);
	printf("%d! = %lld",n, giaiThua(n));

	return 0;
}
