#include <iostream>
#include <string>

using namespace std;

int main()
{

    // delcara variables

    string primerNOMBRE;
    string segundoNOMBRE;
    string primerApellido;
    string segundoApellido;
    string dpi;
    string nombreCompleto;

    cout << "ingrese primer nombre:";
    cin >> primerNOMBRE;

    cout << "ingrese segundo nombre:";
    cin >> segundoNOMBRE;

    cout << "ingrese primer apellido:";
    cin >> primerApellido;

    cout << "ingrese segundo apellido:";
    cin >> segundoApellido;

    cout << "ingrese dpi";
    cin >> dpi;

    // conectar los datos de las variables para formar el nombre completo

    nombreCompleto = primerNOMBRE + " " + segundoNOMBRE + " " + primerApellido + " " + segundoApellido;

    // monstrar en pantalla el resultado
    cout << "datos ingresados: " << endl;
    cout << "nombre completo: " << nombreCompleto << endl;
    cout << "dpi: " << dpi << endl;

        return 0;
}
