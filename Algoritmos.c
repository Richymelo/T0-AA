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
int encontrarMasPequeno(int lista[], int n) {
    //int n = sizeof(lista);
    if (lista == NULL) {
        printf("Error al reservar memoria\n");
        return -1;
    }
    int minimo = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] < minimo) {
            minimo = lista[i];
        }
    }
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

//***********************************************Ejercicio 6
void pequenoGrande(int lista[], int n, int *minimo, int *maximo) {
    int i;

    // Inicialización
    if (n % 2 == 0) { 
        // Si el número de elementos es par
        if (lista[0] < lista[1]) {
            *minimo = lista[0];
            *maximo = lista[1];
        } else {
            *minimo = lista[1];
            *maximo = lista[0];
        }
        i = 2; // Empezamos desde el tercer elemento
    } else {
        // Si es impar
        *minimo = *maximo = lista[0];
        i = 1; // Empezamos desde el segundo elemento
    }

    // Comparar en pares
    for (; i < n - 1; i += 2) {
        int localMin, localMax;
        if (lista[i] < lista[i+1]) {
            localMin = lista[i];
            localMax = lista[i+1];
        } else {
            localMin = lista[i+1];
            localMax = lista[i];
        }

        if (localMin < *minimo) *minimo = localMin;
        if (localMax > *maximo) *maximo = localMax;
    }
    printf("Minimo: %d, Maximo:%d\n", minimo, maximo);
}

int main() {
   
}