#include <iostream>
#include <cstdlib>
#include <string>
#include "algoritmos.c"

using namespace std;

int main() {
    int opc;
    int *lista = nullptr;
    int n;
    int a, b;
    bool menu = true;

    while (menu) {
        cout << "Digite el tamaño de la lista: ";
        cin >> n;
        lista = new int[n];

        for (int i = 0; i < n; i++) {
            cout << "Digite el numero que desea ingresar a la lista: ";
            cin >> lista[i];
        }

        cin.ignore();
        cout << "Presione ENTER para continuar...";
        cin.get();

        system("clear");
        cout << " ********* Menu de ejercicios *********" << endl << endl;
        cout << "  1. Ejercicio 1" << endl;
        cout << "  2. Ejercicio 2" << endl;
        cout << "  3. Ejercicio 3" << endl;
        cout << "  4. Ejercicio 5" << endl;
        cout << "  5. Ejercicio 6" << endl;
        cout << "  6. Cambiar lista" << endl;
        cout << "  7. Salir" << endl;
        cout << endl << "Digite la opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            system("clear");
            cout << "Ejercicio 1" << endl;
            encontrarMasGrande(lista, n);
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        case 2:
            system("clear");
            cout << "Ejercicio 2" << endl;
            encontrarMasPequeno(lista, n);
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        case 3:
            system("clear");
            cout << "Ejercicio 3" << endl;
            imprimirSubconjuntosTres(lista, n);
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        case 4:
            system("clear");
            cout << "Ejercicio 5" << endl;
            cout << "Ingrese un valor para a: ";
            cin >> a;
            cout << "Ingrese un valor para b: ";
            cin >> b;
            encontrarMCD(a, b);
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        case 5:
            system("clear");
            cout << "Ejercicio 6" << endl;
            int minimo, maximo;
            pequenoGrande(lista, n, &minimo, &maximo);
            cout << "Minimo: " << minimo << ", Maximo: " << maximo << endl;
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        case 6:
            delete[] lista;
            lista = nullptr;
            continue; // vuelve a pedir la lista
        case 7:
            menu = false;
            system("clear");
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            cin.ignore();
            cout << "Presione ENTER para continuar...";
            cin.get();
            break;
        }
    }

    delete[] lista;
    return 0;
}