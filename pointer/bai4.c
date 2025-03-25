#include<stdio.h>

void sortArray(int *a, int n){
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (*(a + j) > *(a + j +1)){
				int tmp = *(a + j);
				*(a + j) = *(a + j +1);
				*(a + j + 1) = tmp;
			}
		}
	}
	
}
int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	printf("Nhap cac phan tu trong mang: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	sortArray(a, n);
	printf("Mang sau khi sap xep: ");
	for (int i = 0; i<n; i++){
		printf("%d ", *(a +i));
	}

	return 0;
}
