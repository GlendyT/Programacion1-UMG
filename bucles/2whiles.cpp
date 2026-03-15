/* tabla de multiplicar 8 x 1 = 8*/
#include <iostream>
using namespace std;

int main()
{

    int inicio, fin;
    int i, j; // variables para controlar los ciclos

    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    i = inicio;

    while (i <= fin)
    {
        cout << "\nTabla del " << i << endl;
        j = 1;

        while (j <= 10)
        {
            cout << i << " x " << j << " = " << i * j << endl;
            j++;
        }

        i++;
    }

    return 0;
}