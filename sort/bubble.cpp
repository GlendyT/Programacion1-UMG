/*
metodo burguja
1. ordenamiento
2. compara a la derecha de elemento ady.
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

    // ordenamiento burbuja

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // intercambiar las posiciones
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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