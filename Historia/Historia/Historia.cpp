// Historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <stdio.h>


#define C(x) ( x > 'Z' ? x-'a' : x-'A' )

using namespace std;

int main()
{
    unsigned int matrix[26][26], w;
    char u, v;
    //Inicializamos la Matrix en 0
    memset(matrix, 0, sizeof(matrix));

  
    //freopen Redirecciona la entrada STD desde un archivo
    if (freopen("C:/Users/ivanc/source/repos/Historia/Matriz.txt", "r", stdin)) {
        while (cin >> u >> v >> w) {
            matrix[C(u)][C(v)] = w;
        }

    }
    else {
        cout << "Fallo";
        exit(1);
    }
    
 
       
    // En este punto tenemos cargada la matriz de adyacencia en "matrix"...
   
   
    cout << "Bienvenido a la historia grafica de Bryan Ivan Noe Ramirez Vivanco\n";
    system("pause");
    system("cls");
    cout << "Durante todoe el programa se le iran presentando entre dos opciones a elegir para recorrer la historia.\nCada una de tus decisiones influira en el desarrollo de la misma.ELIGE CON CUIDADO\n";
    system("pause");
    system("cls");
    cout << "Hay un camino de D hacia A y pesa: \n" << matrix[C('d')][C('a')];
  

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
