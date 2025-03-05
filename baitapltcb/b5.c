#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,delta,x1,x2;
	scanf("%f%f%f", &a,&b,&c);
	delta = (b*b)-(4*a*c);
	printf("delta = %.0lf\n", delta);
	printf("%.0lf\n", sqrt(delta));
	
	if (delta < 0){
		printf("Phuong trinh vo nghiem");
	}
	    else if (delta > 0){
		    printf("x1 = %.01lf\n", (-b + sqrt(delta))/(2*a));
		    printf("x2 = %.01lf\n", (-b - sqrt(delta))/(2*a));
	}
	else {
		
	    printf("pt co nghiem kep x1=x2= %.0lf", (-b)/(2*a));
    }
    return 0;
}
