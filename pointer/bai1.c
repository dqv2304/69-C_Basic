#include<stdio.h>

void swap (int *a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a,b;
	printf("Nhap 2 so a va b: ");
	scanf("%d%d", &a, &b);
	swap(&a,&b);
	printf("2 so sau khi hoan doi la: %d, %d", a,b);

	return 0;
}
