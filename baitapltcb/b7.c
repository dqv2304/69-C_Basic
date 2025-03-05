#include <stdio.h>
#include <math.h>

int main (){
	float pts; 
	scanf("%f", &pts);
	if (pts < 5 ) 
		printf("Yeu !");
	else if (pts >= 5 && pts < 7)
		printf("trung binh");
	else if (pts >= 7 && pts < 8)
		printf("Kha");
	else if (pts >= 8 && pts < 9)
		printf("Gioi");
	else 
		printf("xuat sac !");
		
	return 0;
}
