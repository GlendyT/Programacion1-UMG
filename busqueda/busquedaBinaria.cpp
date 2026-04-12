/*
- Busqueda binaria
1. divide el arreglo
2. busca en la mitad correcta
3. determina si el elemento se va a la derecha o a la izquierda
*/

#include <iostream>
using namespace std;

int main()
{

    int n, buscar;

    cout << "Ingrese el numero de elementos: ";
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
    int inicio = 0;  // inicio del arreglo
    int fin = n - 1; // fin del arreglo
    int medio;       // posicion central

    // 0 - 1000 / 2 = 500 / 2 = 250 / 2
    while (inicio <= fin)
    {
        medio = (inicio + fin) / 2; // calculamos la posicion central

        if (arreglo[medio] == buscar) // f 2
        {
            cout << "Elemento encontrado en la posicion: " << medio << endl;
            encontrado = true;
            break;
        }
        else if (arreglo[medio] < buscar) // si el medio es menor
        {
            inicio = medio + 1; // buscamos en la mitad derecha
        }
        else // f4
        {
            fin = medio - 1; // buscamos en la mitad izquierda
        } //f4
    } // f1

    if (encontrado == false)
    {
        cout << "Elemento no encontrado" << endl;
    }

    return 0;
}