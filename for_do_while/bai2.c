#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Nhap so bat ki di nguoi dep: ");
    scanf("%d", &a);

    while (a <= 1) {
        printf("So khong hop le, nhap lai di nguoi dep: ");
        scanf("%d", &a);
    }
	if (a == 2 || a == 3) {
        printf("%d la so nguyen to\n", a);
        return 0;
    }
    if (a % 2 == 0 || a % 3 == 0) {
        printf("%d ko phai la so nguyen to\n", a);
        return 0;
    }

    int songuyento = 1;  
    for (int i = 5; i <= sqrt(a); i += 2) {
        if (a % i == 0) {
            songuyento = 0;  
            break;        
        }
    }

    if (songuyento)
        printf("%d la so nguyen to\n", a);
    else
        printf("%d ko phai la so nguyen to\n", a);

    return 0;
}
