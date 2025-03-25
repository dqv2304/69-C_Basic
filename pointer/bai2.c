#include<stdio.h>

int main(){
	int a[10];
	int *ptr = a;
	printf("Nhap 10 phan tu: ");
	for (int i = 0; i < 10; i++){
		scanf("%d", (ptr + i));
	}

	for (int i = 0; i < 10; i++){
		printf("%d\t", *(ptr + i));
	}

	return 0;
}
