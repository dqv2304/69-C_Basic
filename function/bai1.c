#include<stdio.h>

long long soMu(int x, int y){
	long long  result = 1;
	for (int i = 1; i <= y; i++){
		result *=x;
	}
	return result;
}

int main(){
	int x,y;
	printf("Nhap x, y: ");
	scanf("%d%d", &x, &y);
	printf("%d ^ %d = %lld",x,y, soMu(x,y));

	return 0;
}
