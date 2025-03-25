#include<stdio.h>

void timMinMax(int *a, int *min, int *max, int n){
	*min = *max = *a;
	for (int i = 0; i < n; i++){
		if (*(a + i) > *max){
			*max = *(a + i);
		}
		if (*(a + i) < *min){
			*min = *(a + i);
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

	int min ,max;
	timMinMax(a,&min,&max,n);

	printf("Phan tu lon nhat: %d\n", max);
	printf("Phan tu nho nhat: %d\n", min);

	return 0;
}
