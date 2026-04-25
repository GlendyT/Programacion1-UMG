#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string codigo;
    string nombre;
    string departamento;
    float salarioBase;
    int horasExtra;
    float pagoHorasExtra;
    float salarioTotal;
};

void mostrarListado(Empleado empleados[], int n) {
    cout << "\n===== LISTADO DE EMPLEADOS =====\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado " << (i + 1) << ":\n";
        cout << "Codigo: " << empleados[i].codigo << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Departamento: " << empleados[i].departamento << endl;
        cout << "Salario base: $" << empleados[i].salarioBase << endl;
        cout << "Horas extra: " << empleados[i].horasExtra << endl;
        cout << "Pago horas extra: $" << empleados[i].pagoHorasExtra << endl;
        cout << "Salario total: $" << empleados[i].salarioTotal << endl;
    }
}

void mostrarReportes(Empleado empleados[], int n) {
    float totalNomina = 0, promedioSalarios = 0;
    int mayorIdx = 0, menorIdx = 0, arribaPromedio = 0;
    
    for (int i = 0; i < n; i++) {
        totalNomina += empleados[i].salarioTotal;
        if (empleados[i].salarioTotal > empleados[mayorIdx].salarioTotal) mayorIdx = i;
        if (empleados[i].salarioTotal < empleados[menorIdx].salarioTotal) menorIdx = i;
    }
    promedioSalarios = totalNomina / n;
    
    for (int i = 0; i < n; i++) {
        if (empleados[i].salarioTotal > promedioSalarios) arribaPromedio++;
    }
    
    cout << "\n===== REPORTES =====\n";
    cout << "Total general de la nomina: $" << totalNomina << endl;
    cout << "Promedio de salarios totales: $" << promedioSalarios << endl;
    cout << "\nEmpleado con mayor salario:\n";
    cout << "  Nombre: " << empleados[mayorIdx].nombre << " - Salario: $" << empleados[mayorIdx].salarioTotal << endl;
    cout << "Empleado con menor salario:\n";
    cout << "  Nombre: " << empleados[menorIdx].nombre << " - Salario: $" << empleados[menorIdx].salarioTotal << endl;
    cout << "Empleados que ganan mas que el promedio: " << arribaPromedio << endl;
    
    cout << "\nEmpleados arriba del promedio:\n";
    for (int i = 0; i < n; i++) {
        if (empleados[i].salarioTotal > promedioSalarios) {
            cout << "  - " << empleados[i].nombre << ": $" << empleados[i].salarioTotal << endl;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;
    
    Empleado empleados[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\n--- Empleado " << (i + 1) << " ---\n";
        cout << "Codigo: ";
        cin >> empleados[i].codigo;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);
        cout << "Departamento: ";
        getline(cin, empleados[i].departamento);
        cout << "Salario base: ";
        cin >> empleados[i].salarioBase;
        cout << "Horas extra trabajadas: ";
        cin >> empleados[i].horasExtra;
        float valorHoraExtra = empleados[i].salarioBase / 160;
        empleados[i].pagoHorasExtra = empleados[i].horasExtra * valorHoraExtra * 1.5;
        empleados[i].salarioTotal = empleados[i].salarioBase + empleados[i].pagoHorasExtra;
    }
    
    int opcion;
    do {
        cout << "\n\n===== MENU =====\n";
        cout << "1. Ver listado de empleados\n";
        cout << "2. Ver reportes\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                mostrarListado(empleados, n);
                break;
            case 2:
                mostrarReportes(empleados, n);
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
