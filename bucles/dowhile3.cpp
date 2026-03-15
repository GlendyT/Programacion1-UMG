/* tabla de multiplicar 8 x 1 = 8*/
#include <iostream>
using namespace std;

int main()
{

    int opcion;

    do
    {

        cout << "\n==== MENU PRINCIPAL BANRURAL===" << endl;
        cout << "1. Cuentas monetarias" << endl;
        cout << "2. Cuentas de ahorro" << endl;
        cout << "3. Plazo fijo" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        // controlar el flujo del menu

        switch (opcion)
        {
        case 1:
            cout << "Usted ha seleccionado cuentas monetarias" << endl;
            break;
        case 2:
            cout << "Usted ha seleccionado cuentas de ahorro" << endl;
            break;
        case 3:
            cout << "Usted ha seleccionado Plazo fijo" << endl;
            break;
        case 4:
            cout << "Usted ha seleccionado salir" << endl;
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            break;
        }

    } while (opcion != 4); // el ciclo finaliza cuando el usuario ingresa la opcion 4

    return 0;
}