/**
 * Estructuras
 * 1. Poner estudiantes
 * 2. Sus atributos
 * 3. atributos de mi estructura {distintos tipos }
 */

#include <iostream>
using namespace std;

struct empleado
{
    int codigo;
    string nombre;
    float salario;
};

int main()
{

    empleado emp;

    cout << "Ingrese el codigo del empleado: ";
    cin >> emp.codigo;

    cin.ignore();
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, emp.nombre);

    cout << "Ingrese el salario del empleado: ";
    cin >> emp.salario;

    cout << "\n-----Datos del empleado:------" << endl;
    cout << "Codigo: " << emp.codigo << endl;
    cout << "Nombre: " << emp.nombre << endl;
    cout << "Salario: " << emp.salario << endl;

    return 0;
}