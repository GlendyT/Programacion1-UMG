#include <iostream>

using namespace std;

int main()
{

    int numeros[5]; /* declarando en el programa cantidad de elementos que contendra*/
    int suma = 0;

    // realizamos el almacenamiento
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese los numeros";
        cin >> numeros[i];
    }

    // suma
    for (int i = 0; i < 5; i++)
    {
        suma += numeros[i];
    }

    cout << "La suma de los numeros es: " << suma << endl;

    // salida

    return 0;
}