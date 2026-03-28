/*
metodo burguja
1. ordenamiento
2. tomar el prier elemento
3. intercambiar pos.
 */
#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Ingrese la cantidad de elementos:" << endl;
    cin >> n;

    int arr[n];

    // ingrese los datos
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento[" << i << "] = ";
        cin >> arr[i];
    }

    // ordenamiento insercion

    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // mover los elementos mayores a la derecha
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // insertar el elementos en su posición correcta
        arr[j + 1] = key;
    }

    // mostrar el resultado
    cout << "\nOrdenamiento burbuja:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}