// Historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <fstream>


#define C(x) ( x > 'Z' ? x-'a' : x-'A' )

using namespace std;

int main()
{
    unsigned int matrix[26][26], w;
    char u, v;
    int opc;
    memset(matrix, 0, sizeof(matrix));
    ifstream archivo;

    archivo.open("C:/Users/ivanc/source/repos/Historia/Matriz.txt");
    if (!archivo.is_open()) {
        cout << "Error del archivo";
        return 1;
    }
    else {
        while (archivo >> u >> v >> w) {
            matrix[C(u)][C(v)] = w;
        }
    }

    cout << "Bienvenido a la historia grafica de Bryan Ivan Noe Ramirez Vivanco\n";
    system("pause");
    system("cls");
    cout << "Durante todoe el programa se le iran presentando entre dos opciones a elegir para recorrer la historia.\nCada una de tus decisiones influira en el desarrollo de la misma.ELIGE CON CUIDADO\n";
    system("pause");
    system("cls");
    cout << "Has terminado la Preparatoria con tu titulo de TECNOLOGO\nQue quieres hacer ahora?:\n1. Ir a la Universidad      2. Comenzar a trabajar\nElija opcion:\n";
    cin >> opc;
    if (opc == 1) {
        if (matrix[C('b')][C('c')]) {
            printf("Hay un camino de B hacia C y pesa: %u.\n", matrix[C('b')][C('c')]);
        }
        else {
            printf("No existe un camino de B hacia C.\n");
        }
    }
    else {
        cout << "Hay un camino de A hacia C y pesa: \n" << matrix[C('a')][C('c')];
    }
    return 1;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
