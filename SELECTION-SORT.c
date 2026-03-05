#include <stdio.h>
#include <time.h>


int selection_sort(int arreglo[],int n) {


    printf("\n\n---- PRUEBA DE INSERTION SORT CON N=%d ------",n);
    printf("\nArreglo Desordenado: [ ");

    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%d, ", arreglo[i]);
        else
            printf("%d ]", arreglo[i]);
    }



    clock_t inicio = clock();


    for (int i=1; i>n-1;i++) {
        int m=i;
        for (int j = i+1; j < n; ++j) {
            if (arreglo[j]<arreglo[m]) {
                m=j;
            }
        }

        if (m != i) {
            arreglo[i]=arreglo[m];
        }
    }

    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) /  CLOCKS_PER_SEC;

    printf("\nArreglo ordenado: [ ");
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%d, ", arreglo[i]);
        else
            printf("%d]", arreglo[i]);
    }

    printf("\nTiempo de ejecucion %f",tiempo);

}



int main() {
    int arrays[][40] = {
        {9, 10},
        {5, 3, 8, 1},
        {7, 2, 4, 6, 9, 120},
        {15, 42, 7, 33, 21, 8, 3, 99, 14, 56},
        {88, 23, 45, 12, 67, 34, 9, 76, 51, 28, 63, 17},
        {4, 19, 72, 38, 55, 91, 26, 83, 47, 62, 11, 35, 78, 29, 6, 94},
        {50, 13, 87, 41, 68, 25, 59, 36, 74, 18, 93, 44, 7, 82, 31, 66, 48, 20},
        {37, 84, 16, 71, 52, 29, 95, 43, 8, 67, 24, 79, 11, 58, 33, 86, 49, 22, 75, 40},
        {60, 17, 89, 34, 73, 28, 96, 45, 12, 81, 39, 64, 21, 57, 86, 32, 70, 15, 44, 98,
         27, 53, 9, 78, 42, 65, 19, 88, 36, 74},
        {55, 31, 76, 14, 92, 48, 23, 67, 39, 84, 7, 61, 28, 95, 43, 18, 72, 37, 80, 25,
         59, 46, 13, 90, 35, 68, 22, 85, 41, 77, 16, 63, 30, 97, 52, 8, 71, 44, 26, 83}
    };

    int sizes[] = {2, 4, 6, 10, 12, 16, 18, 20, 30, 40};
    int num_arrays = sizeof(arrays) / sizeof(arrays[0]);

    for (int i = 0; i < num_arrays; i++) {
        selection_sort(arrays[i], sizes[i]);
    }

    return 0;
}




