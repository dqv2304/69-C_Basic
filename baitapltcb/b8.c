#include <stdio.h>
#include <math.h>
#include <stdbool.h>

		//ham kiem tra 2 canh bang nhau
bool check(double a, double b){ 
	double eps = 0.000001;
	return fabs(a-b) < eps;
}

int main (){
	double a,b,c;
	printf("Nhap 3 canh di nguoi dep: ");
	scanf("%lf%lf%lf", &a,&b,&c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		double chuvi = a + b + c;
		double hc = chuvi / 2;
		double s = sqrt(hc * (hc - a) * (hc - b) * (hc - c));   // cong thuc heron
			
		if (check(a, b) && check(a, c)){
			printf("tam giac deu\n");
		} 
		else if (check(a, b) || check(b, c) || check(a, c)){
			if (check(a * a, b * b + c * c) || check(b * b, a * a + c * c) || check(c * c, a * a + b * b)){
				printf("tam giac vuong can\n");
			}
			else {
				printf("tam giac can\n");
			}
		}
		else if(check(a * a, b * b + c * c) || check(b*b, a*a+c*c) || check(c*c, a*a+b*b)){
			printf("tam giac vuong\n");
		}
		else {
			printf("tam giac thuong\n");
		}
		
		printf("chu vi = %.02lf\n", chuvi);
		printf("dien tich = %.02lf\n", s);
	}
	else {
		printf("khong phai tam giac");
	}

	return 0;
}
