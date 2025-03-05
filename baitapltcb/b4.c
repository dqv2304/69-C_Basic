#include<stdio.h>
#include<math.h>

int main(){
	int R; 
	scanf("%d", &R);
	double s = (4 * M_PI * R*R);
	double v = (4 * M_PI * (double)pow(R, 3)/3);
	printf("Dien tich: %.2lf \n", s);
	printf("The tich: %.2lf ", v);
	
	
	return 0;
}
