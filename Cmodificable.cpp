// Cmodificable.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Programa para condicionales (case) que limpia la pantalla despues de ejecutar una opción, con opción de salida

#include <iostream>  // Permite que el Programa envie datos a la pantalla
#include <string>  // El programa usa la clase string estandar de C++

using namespace std; // Para no poner el std

int main()  // Programa principal
{
    int numero; // Declaramos la variable a utilizar

    do // Instruccion para repetir instrucciónes
    {
        system("cls"); // Instrucción para limpiar la pantalla

        // Bienvenida
        cout << "Bienvenido al programa no 2 de condicionales (switch) \n\n";
        cout << "Teclea del 1 al 6 para opciones \n\n";
        cout << "Teclea 7 para salir \n\n";

        // Damos instrucciónes al usuario
        cout << "Teclee un numero del 1 al 6 \n";

        // Se guarda lo tecleado por el usuario
        cin >> numero;

        // Aqui se programan las opciones 
        switch (numero)

        {
        case 1: cout << "Seleccionaste la opcion numero 1 \n"; system("pause"); break; // Acciones de la opción 1
        case 2: cout << "Seleccionaste la opcion numero 2 \n"; system("pause"); break; // Acciones de la opción 2
        case 3: cout << "Seleccionaste la opcion numero 3 \n"; system("pause"); break; // Acciones de la opción 3
        case 4: cout << "Seleccionaste la opcion numero 4 \n"; system("pause"); break; // Acciones de la opción 4
        case 5: cout << "Seleccionaste la opcion numero 5 \n"; system("pause"); break; // Acciones de la opción 5
        case 6: cout << "Seleccionaste la opcion numero 6 \n"; system("pause"); break; // Acciones de la opción 6
        }

    }

    while (numero != 7);
    cout << "\n Gracias por utilizar el programa. Presione cualquier tecla para salir \n ";
    system("pause>nul"); //Hace que el programa se detenga y se cierre al presionar una tecla
    return 0;
}


// Fin del programa


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
