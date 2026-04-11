/*
1. dinamicamente le vamos agregar el tamaño
2. validacion de numeros que sean positivos
3. muestre el mayor y menor de los numeros
*/
#include <iostream>

using namespace std;

int main()
{

    int tamaño = 0;

    cout << "Ingrese el tamaño del arreglo";
    cin >> tamaño;

    int numeros[tamaño]; // declaramos el arreglo
    int mayor, menor;

    for (int i = 0; i < tamaño; i++)
    {

        do
        {
            cout << "Ingrese numeros [" << i << "]:";
            cin >> numeros[i];

            if (numeros[i] < 0)
            {
                cout << "Error. -  Solo se permiten numeros positos:\n";
            }
        } while (numeros[i] < 0);
    }

    // verificar el mayor y menor
    mayor = numeros[0];
    menor = numeros[0];
    for (int i = 0; i < tamaño; i++)
    {

        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    cout << "El numero mayor es" << mayor << endl;
    cout << "El numero menor es" << menor << endl;

    return 0;
}
