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

    printf("Lista antes de usar INSERTION-SORT\n");

    for (int i = 0; i < n; ++i) {
        printf(" %d" ,arreglo[i]);
    }

    for (int j = 1; j < n; ++j) {
        int llave=arreglo[j];
        int i=j-1;

        while (i >= 0 && arreglo[i] > llave) {
            arreglo[i+1]=arreglo[i];
            i=i-1;
        }

        arreglo[i+1]=llave;
    }

    printf("\n Lista despues de usar INSERTION-SORT\n");

    for (int i = 0; i < n; ++i) {
        printf(" %d" ,arreglo[i]);
    }
}

