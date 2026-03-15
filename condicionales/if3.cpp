#include <iostream>

using namespace std;

int main()

{

    int nota;

    cout << "Ingrese su nota:";
    cin >> nota;

    if (nota >= 90)
    {
        cout << "Excelente" << endl;
    }
    else if (nota >= 70)
    {
        cout << "Aprobado" << endl;
    }
    else if (nota >= 61)
    {
        cout << "Bueno" << endl;
    }
    else
    {
        cout << "Reprobado" << endl;
    }
    return 0;
}