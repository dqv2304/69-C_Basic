#include <stdio.h>
#include <math.h>

int main (){ 
	float a,b,c,d,e,f;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d,&e,&f);
	float D = a*e - b*d;
	float Dx = c*e - b*f;
	float Dy =  a*f - c*d;

	if (D != 0){
		float x = Dx / D;
		float y = Dy / D;
		printf("Nghiem cua he la: x = %.2f, y = %.2f", x,y);
	}
	else {
		if (Dx == 0 && Dy == 0) {
			printf("he co vo so nghiem");
		}
		else {
			printf("He vo nghiem");
		}
	}
	return 0;
}
