// Algoritmos.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//***********************************************Ejercicio 1
// Los parametros son la lista y el tamaño de la lista
int encontrarMasGrande(int lista[], int n) {
    

    if (n <= 0) {
        printf("Error: El arreglo está vacío\n");
        return -1; // Valor de error
    }
    
    int maximo = lista[0];
    
    for (int i = 1; i < n; i++) {
        if (lista[i] > maximo) {
            maximo = lista[i];
        }
    }
    
    return maximo;
}

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


//***********************************************Ejercicio 3
// Los paramentros es la lista, y el tamaño de la lista
void imprimirSubconjuntosTres(int lista[], int n) {
    
    // Verificar que el arreglo tenga al menos 3 elementos
    if (n < 3) {
        printf("Error: Se necesitan al menos 3 elementos para formar los subconjuntos\n");
        return;
    }
    
    printf("Subconjuntos:\n");
    int contador = 0;
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                contador++;
                printf("Subconjunto %d: {%d, %d, %d}\n", 
                       contador, lista[i], lista[j], lista[k]);
            }
        }
    }
    
    printf("Total de subconjuntos: %d\n", contador);
}



//***********************************************Ejercicio 4
int* pequenoGrande(int* lista) {
    return 0;
}


//***********************************************Ejercicio 5
int valorAbsoluto(int x) {
    return (x < 0) ? -x : x;
}

int encontrarMCD(int a, int b) {
    a = valorAbsoluto(a);
    b = valorAbsoluto(b);
    
    if (b == 0) {
        return a;
    }
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}


//***********************************************Ejercicio 7




int main() {
   
}