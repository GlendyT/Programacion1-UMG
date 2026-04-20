/**
 * Estructuras
 * 1. Poner estudiantes
 * 2. Sus atributos
 * 3. atributos de mi estructura {distintos tipos }
 * 4. arreglo []
 * 5. estructura anidada //
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct direccion
{
    string calle;
    string departamento;
};

struct empleado
{
    int codigo;
    string nombre;
    float salario;
    direccion dir;
};

int main()
{

    int n;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;

    cin.ignore(); // Limpiar el buffer de entrada

    // empleados a la estructura
    empleado emp[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\n-----Datos del Empleado---" << i + 1 << endl;

        cout << "Codigo: ";
        cin >> emp[i].codigo;

        cin.ignore(); // Limpiar el buffer de entrada antes de leer la dirección
        cout << "Nombre: ";
        getline(cin, emp[i].nombre); // Leer el nombre completo

        cout << "Salario: ";
        cin >> emp[i].salario;

        cin.ignore(); // Limpiar el buffer de entrada antes de leer la dirección

        cout << "Calle: ";
        getline(cin, emp[i].dir.calle);

        cout << "Departamento: ";
        getline(cin, emp[i].dir.departamento);
    }

    // REPORTE
    /*
    1. Encabezado (presentar informacion de la empresa, titulos, fecha hora)
    2. Detalle (columnas y filas)
    3. Pie(informacion numero de pagina, informacion persona,)
    */
    cout << "\n-----Reporte de Empleados-----\n"
         << endl;

    // detalle encabezado
    cout << left << setw(20) << "Codigo"
         << setw(20) << "Nombre"
         << setw(12) << "Salario"
         << setw(20) << "Calle"
         << setw(20) << "Departamento" << endl;

    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(20) << emp[i].codigo
             << setw(20) << emp[i].nombre
             << setw(12) << emp[i].salario
             << setw(20) << emp[i].dir.calle
             << setw(20) << emp[i].dir.departamento << endl;
    }

    cout << "\n Elaborado pr : [Tu Nombre]" << endl;

    return 0;
}