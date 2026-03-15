/* tabla de multiplicar 8 x 1 = 8*/
#include <iostream>
using namespace std;

int main()
{

    int numero;

    do
    { // pr lo menos ingresa 1 vez a nuestro ciclo

        cout << "Ingres el numero: ";
        cin >> numero;

    } while (numero <= 0); // verifica la condicion si es correcta se repite de caso contrato finaliza menus, verificar ingrese al sistema.

    return 0;
}