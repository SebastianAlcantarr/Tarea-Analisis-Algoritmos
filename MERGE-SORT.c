#include <stdio.h>


int main() {
    int n;
    printf("De cuantos elementos tu lista a ordenar:");
    scanf("%d",&n);


    int arreglo[n];

    for (int i = 0; i < n; ++i) {
        int numero;
        printf("Ingresa el elemento numero: %d ",i );
        scanf("%d",&numero);
        arreglo[i]=numero;
    }

    printf("Lista antes de usar SELECTION-SORT\n");

    for (int i = 0; i < n; ++i) {
        printf(" %d" ,arreglo[i]);
    }




    printf("\n Lista despues de usar SELECTION-SORT\n");

    for (int i = 0; i < n; ++i) {
        printf(" %d" ,arreglo[i]);
    }
}



