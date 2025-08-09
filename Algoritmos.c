// Algoritmos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

//***********************************************Ejercicio 2
int encontrarMasPequeno(int lista[]) {
    int n = sizeof(lista);
    int* listaAux = (int*)malloc(n * sizeof(int));
    if (listaAux == NULL) {
        printf("Error al reservar memoria\n");
        return -1;
    }
    for (int i = 1; i < n; i++) {
        listaAux[i] = lista[i];
    }
    int minimo = listaAux[0];
    for (int i = 1; i < n; i++) {
        if (listaAux[i] < minimo) {
            minimo = listaAux[i];
        }
    }
    free(listaAux);
    return minimo;
}

//***********************************************Ejercicio 4
int* pequenoGrande(int* lista) {
    return 0;
}


int main() {

}