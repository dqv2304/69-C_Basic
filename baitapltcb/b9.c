#include <stdio.h>
#include <math.h>

int main (){
	int month, year; 
	scanf("%d%d", &month,&year);
	int namnhuan = ((year % 4 == 0 && year % 100 != 0 || year & 400 == 0));
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang co 31 ngay\n"); 
		break;
		
		case 2:
			if (namnhuan){
				printf("thang co 28 ngay");
			}
			else {
				printf("thang co 29 ngay");
			}
		break;

		case 4: case 6: case 9: case 11:
			printf("thang co 30 ngay");
		break;

		default:
			printf("Thang ko hop le");
	}
	
	return 0;
}
