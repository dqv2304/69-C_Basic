#include <stdio.h>
#include <math.h>

int UCLN(int a, int b){
    a = (a<0) ? -a : a;
    b = (b<0) ? -b : b;
    int ucln = 1;
    for(int i =(a<b ? a : b); i>= 1; i--){
        if(a % i == 0 && b % i == 0){
            ucln = i;
            break;
        }
    }
    return ucln;    
}

int BCNN(int a, int b){
    a = (a<0) ? -a : a;
    b = (b<0) ? -b : b;

    int max = (a > b ? a:b);
    while(1){
        if (max % a == 0 && max % b == 0){
            return max;
        }
        max++;
    }
}

int main() {
    int a,b;
    printf("nhap 2 so nguyen di nguoi dep: ");
    scanf("%d%d", &a, &b);
    printf("UCLN: %d, BCNN: %d", UCLN(a,b), BCNN(a,b));
    
    return 0;
}
