#include <stdio.h>
#include "Algoritmos.h"

void encontrarMasGrande(int* lista, int n) {
    // Implementación de ejemplo
    int max = lista[0];
    for (int i = 1; i < n; i++)
        if (lista[i] > max) max = lista[i];
    printf("El número más grande es: %d\n", max);
}

void encontrarMasPequeno(int* lista, int n) {
    int min = lista[0];
    for (int i = 1; i < n; i++)
        if (lista[i] < min) min = lista[i];
    printf("El número más pequeño es: %d\n", min);
}

void imprimirSubconjuntosTres(int* lista, int n) {
    printf("Subconjuntos de tres elementos:\n");
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            for (int k = j+1; k < n; k++)
                printf("%d, %d, %d\n", lista[i], lista[j], lista[k]);
}

void encontrarMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("El MCD es: %d\n", a);
}

void pequenoGrande(int* lista, int n, int* minimo, int* maximo) {
    *minimo = lista[0];
    *maximo = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] < *minimo) *minimo = lista[i];
        if (lista[i] > *maximo) *maximo = lista[i];
    }
}