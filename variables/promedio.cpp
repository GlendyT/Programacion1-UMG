#include <iostream>
using namespace std;

int main()
{

    // varialbes de texto

    float nota1, nota2, nota3;
    double promedio;

    /* varialbe char para saber que promedio tiene el alumno
     varialbe char para saber que promedio tiene el alumno
     varialbe char para saber que promedio tiene el alumno*/

    char letra;

    cout << "ingrese 1 nota:" << endl;
    cin >> nota1;

    cout << "ingrese 2 nota:" << endl;
    cin >> nota2;

    cout << "ingrese 3 nota:" << endl;
    cin >> nota3;

    // promedio del alumno

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 90)
    {
        letra = 'A';
    }
    else if (promedio >= 80)
    {
        letra = 'B';
    }
    else if (promedio >= 70)
    {
        letra = 'C';
    }
    else if (promedio >= 60)
    {
        letra = 'D';
    }
    else
    {
        letra = 'F';
    }

    // mostrar resultados
    cout << "el promedio del alumno es: " << promedio << " y su letra es: " << letra << endl;

    return 0;
}