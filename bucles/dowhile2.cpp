/* tabla de multiplicar 8 x 1 = 8*/
#include <iostream>
using namespace std;

int main()
{
    string password;
    int intentos = 0;

    do
    {

        cout << "Ingrese el contraseña: ";
        cin >> password;

        if (password == "1234")
        {
            cout << "Contraseña correcta. Acceso concedido." << endl;
            break; // Salir del bucle si la contraseña es correcta
        }
        else
        {
            cout << "Contraseña incorrecta." << endl;
            intentos++;
        }

    } while (intentos < 3);

    if (intentos == 3 && password != "1234")
    {
        cout << "Demasiados intentos fallidos. Acceso denegado." << endl;
    }

    return 0;
}