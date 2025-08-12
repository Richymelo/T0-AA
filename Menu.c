#include <stdio.h>
#include <stdlib.h>
#include "Algoritmos.h"

void pedirLista(int **lista, int *n) {
    printf("Digite el tamaño de la lista: ");
    scanf("%d", n);
    *lista = (int*)malloc((*n) * sizeof(int));
    if (!*lista) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < *n; i++) {
        printf("Digite el numero que desea ingresar a la lista: ");
        scanf("%d", &((*lista)[i]));
    }
}

int main() {
    int opc;
    int *lista = NULL;
    int n = 0;
    int a, b;
    int menu = 1;

    pedirLista(&lista, &n);

    while (menu) {
        system("clear");
        printf(" ********* Menu de ejercicios *********\n\n");
        printf("  1. Ejercicio 1\n");
        printf("  2. Ejercicio 2\n");
        printf("  3. Ejercicio 3\n");
        printf("  4. Ejercicio 5\n");
        printf("  5. Ejercicio 6\n");
        printf("  6. Cambiar lista\n");
        printf("  7. Salir\n");
        printf("\nDigite la opcion: ");
        scanf("%d", &opc);

        switch (opc) {
        case 1:
            system("clear");
            printf("Ejercicio 1\n");
            encontrarMasGrande(lista, n);
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        case 2:
            system("clear");
            printf("Ejercicio 2\n");
            encontrarMasPequeno(lista, n);
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        case 3:
            system("clear");
            printf("Ejercicio 3\n");
            imprimirSubconjuntosTres(lista, n);
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        case 4:
            system("clear");
            printf("Ejercicio 5\n");
            printf("Ingrese un valor para a: ");
            scanf("%d", &a);
            printf("Ingrese un valor para b: ");
            scanf("%d", &b);
            encontrarMCD(a, b);
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        case 5: {
            system("clear");
            printf("Ejercicio 6\n");
            int minimo, maximo;
            pequenoGrande(lista, n, &minimo, &maximo);
            printf("Minimo: %d, Maximo: %d\n", minimo, maximo);
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        }
        case 6:
            free(lista);
            lista = NULL;
            pedirLista(&lista, &n);
            break;
        case 7:
            menu = 0;
            system("clear");
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invalida\n");
            printf("Presione ENTER para continuar...");
            getchar(); getchar();
            break;
        }
    }

    free(lista);
    return 0;
}