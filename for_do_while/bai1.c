#include <stdio.h>
#include <math.h>

int main(){
	int a[10];
	printf("Nhap 10 so di nguoi dep:");
	for (int i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i <10;i++){
		sum += a[i];
	}
	printf("%d ", sum);

	return 0;
}
