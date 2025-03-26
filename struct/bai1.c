#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    char name[100];
    double price;
    int quantity;
    double total;
};

void sortProd(struct Product *prods, int n) {
    struct Product tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++){
            if (strcmp(prods[i].name, prods[j].name) > 0){
                tmp = prods[i];
                prods[i] =prods[j];
                prods[j] = tmp;
            }
        }        
    }
}

void inputProd(struct Product *prods, int n)
{
    for (int i = 0; i < n; i++){
        printf("Nhap ten mat hang %d: ", i + 1);
        getchar();
        fgets(prods[i].name, 100, stdin);
        prods[i].name[strcspn(prods[i].name, "\n")] = 0;
        printf("Nhap don gia: ");
        scanf("%lf", &prods[i].price);
        printf("nhap so luong: ");
        scanf("%d", &prods[i].quantity);
        prods[i].total = prods[i].price * prods[i].quantity;
    }    
}

void outputProd(struct Product *prods, int n)
{
    printf("\nDanh sach mat hang:\n");
    printf("%-20s %-15s %-10s %-15s\n", "Ten hang", "Don gia", "So luong", "Thanh tien");
    printf("------------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-20s %-15.2f %-10d %-15.2f\n", prods[i].name, prods[i].price, prods[i].quantity, prods[i].total);
    }
}

int main(){
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    struct Product *prods = (struct Product *)malloc(n * sizeof(struct Product));
    
    inputProd(prods, n);
    sortProd(prods, n);
    outputProd(prods, n);

    free(prods);

    return 0;    
}
