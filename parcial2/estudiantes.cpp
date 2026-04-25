#include <iostream>
#include <string>
using namespace std;

struct Estudiante
{
    string codigo;
    string nombre;
    float nota1, nota2, nota3;
    float promedio;
    string estado;
};

void mostrarListado(Estudiante estudiantes[], int n)
{
    cout << "\n===== LISTADO DE ESTUDIANTES =====\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEstudiante " << (i + 1) << ":\n";
        cout << "Codigo: " << estudiantes[i].codigo << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Notas: " << estudiantes[i].nota1 << ", " << estudiantes[i].nota2 << ", " << estudiantes[i].nota3 << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << "Estado: " << estudiantes[i].estado << endl;
    }
}

void mostrarReportes(Estudiante estudiantes[], int n)
{
    float promedioGeneral = 0;
    int aprobados = 0, reprobados = 0;
    int mayorIdx = 0, menorIdx = 0;

    for (int i = 0; i < n; i++)
    {
        promedioGeneral += estudiantes[i].promedio;
        if (estudiantes[i].estado == "Aprobado")
            aprobados++;
        else
            reprobados++;
        if (estudiantes[i].promedio > estudiantes[mayorIdx].promedio)
            mayorIdx = i;
        if (estudiantes[i].promedio < estudiantes[menorIdx].promedio)
            menorIdx = i;
    }
    promedioGeneral /= n;

    cout << "\n===== REPORTES =====\n";
    cout << "Promedio general de la clase: " << promedioGeneral << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;
    cout << "\nEstudiante con mayor promedio:\n";
    cout << "  Nombre: " << estudiantes[mayorIdx].nombre << " - Promedio: " << estudiantes[mayorIdx].promedio << endl;
    cout << "Estudiante con menor promedio:\n";
    cout << "  Nombre: " << estudiantes[menorIdx].nombre << " - Promedio: " << estudiantes[menorIdx].promedio << endl;
}

int main()
{
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    Estudiante estudiantes[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Estudiante " << (i + 1) << " ---\n";
        cout << "Codigo: ";
        cin >> estudiantes[i].codigo;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Nota 1: ";
        cin >> estudiantes[i].nota1;
        cout << "Nota 2: ";
        cin >> estudiantes[i].nota2;
        cout << "Nota 3: ";
        cin >> estudiantes[i].nota3;
        estudiantes[i].promedio = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3) / 3;
        estudiantes[i].estado = (estudiantes[i].promedio >= 61) ? "Aprobado" : "Reprobado";
    }

    int opcion;
    do
    {
        cout << "\n\n===== MENU =====\n";
        cout << "1. Ver listado de estudiantes\n";
        cout << "2. Ver reportes\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            mostrarListado(estudiantes, n);
            break;
        case 2:
            mostrarReportes(estudiantes, n);
            break;
        case 3:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion invalida\n";
        }
    } while (opcion != 3);

    return 0;
}
