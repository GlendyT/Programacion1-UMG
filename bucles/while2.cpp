/* tabla de multiplicar 8 x 1 = 8*/
#include <iostream>
using namespace std;

int main()
{

    int numero;
    int limite;
    int contador = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Ingrese un limite: ";
    cin >> limite;

    while (contador <= limite)
    {
        cout << numero << " * " << contador << " = " << numero * contador << endl;
        contador++;
    }

    return 0;
}