#include<stdio.h>

int soMu(int x, int y){
	int result = 1;
	for (int i = 1; i <= y; i++){
		result *=x;
	}
	return result;
}

int main(){
	int x,y;
	printf("Nhap x, y: ");
	scanf("%d%d", &x, &y);
	printf("x^y = %d", soMu(x,y));

	return 0;
}
