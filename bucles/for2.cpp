/* ingreso de paciente y mostrar el listado */
#include <iostream>
using namespace std;

int main()
{

    string paciente[5]; /*Almacenar informacion no tocar varias vaces la base de datos*/

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el nombre del paciente: " << i + 1 << ":";
        cin >> paciente[i];
    }

    cout << "Listado de pacientes: " << endl;

        for (int i = 0; i < 5; i++)
    {
        cout << "Paciente " << i + 1 << ": " << paciente[i] << endl;
    }

    return 0;
}