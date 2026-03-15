#include <iostream>

using namespace std;

int main()
{

    bool usuarioValido = true;
    bool passwordCorreto = true;
    bool tienePermiso = false;

    if (usuarioValido)
    {
        cout << "usuario es valido";

        if (passwordCorreto)
        {
            cout << "contraseña correcta";
            tienePermiso = true;
        }
        else
        {
            cout << "contraseña incorrecta";
        }
    }
    else
    {
        cout << "usuario no valido";
    }

    if (tienePermiso)
    {
        cout << "tiene permiso";
    }
    else
    {
        cout << "no tiene permiso";
    }

    cout << "\n";

    return 0;
}