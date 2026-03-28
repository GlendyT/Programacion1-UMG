/*
metodo seleccion
1. empieza pos 1
2. valor actual
3. busca en la lista el menor valor
4. intercambia el valor actual con el menor valor encontrado
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

    // ordenamiento seleccion

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // intercambiar el valor actual con el menor valor encontrado
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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