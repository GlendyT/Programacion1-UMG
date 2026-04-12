/*
- algoritmo busqueda secuelcial
-1. recorrer la lista en forma secuencial
2. no importa si esta ordenada
*/

#include <iostream>
using namespace std;

int main()
{

    int n, buscar;

    cout << "Ingrese la cantidad de elementos :";
    cin >> n;

    int arreglo[n];
    // ingresamos los datos
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento [ " << i << "]: ";
        cin >> arreglo[i];
    }

    cout << "Ingrese el elemento a buscar: ";
    cin >> buscar;

    bool encontrado = false;
    for (int i = 0; i < n; i++)
        if (arreglo[i] == buscar)
        {
            {
                cout << "Elemento encontrado en la posicion" << i << endl;
                bool encontrado = true;
                break;
            }
        }

    if (encontrado == false)
    {
        cout << "Elemento no encontrado" << endl;
    }
    return 0;
}