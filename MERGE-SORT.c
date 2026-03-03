#include <stdio.h>


int funcion_merge(int arr[],int inicio,int medio,int fin) {
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[inicio + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[medio + 1 + j];
    }


    int longitud_izq=(sizeof(L) / sizeof(L[0]));
    int longitud_der=(sizeof(R) / sizeof(R[0]));


    int i=0;
    int j=0;
    int k=inicio;
    while (i<longitud_izq && j < longitud_der ) {
        if (L[i] <= R[j]) {
            arr[k]=L[i];
            i=i+1;
        }else {
            arr[k]=R[i];
            j=j+1;
        }
        k=k+1;
    }

    while (i < longitud_izq) {
        arr[k]=L[i];
        i=i+1;
        k=k+1;
    }
    while (j < longitud_der) {
        arr[k]=R[j];
        j=j+1;
        k=k+1;
    }
    return 0;
}


int merge_sort(int arr[],int inicio,int final) {
    if (inicio>final) {
        int enmedio=(inicio+final)/2;
        merge_sort(arr,inicio,final);
        merge_sort(arr,enmedio +1,final);
        funcion_merge(arr,inicio,enmedio,final);
    }
    return 0;
}






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


    merge_sort(arreglo,arreglo[0],arreglo[n]);



    printf("\n Lista despues de usar SELECTION-SORT\n");

    for (int i = 0; i < n; ++i) {
        printf(" %d" ,arreglo[i]);
    }
}






