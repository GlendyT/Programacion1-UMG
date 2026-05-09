#include <iostream>
#include <vector> //  libreria para usar listas dinamicas
#include <string>

using namespace std;

int main()
{
    vector<string> inventario = {"laptop", "mouse", "Teclado"};

    inventario.push_back("Monitor");
    inventario.push_back("Webcam");

    cout << "-- Invencario Inicial ---" << endl;

    for (int i = 0; i < inventario.size(); i++)
    {
        cout << "Indice [" << i << "]: " << inventario[i] << endl;
    }

    cout << "\n  Actualizando el elemento en el indice 1..." << endl;
    inventario[1] = "Mouse Inalambrico";

    inventario.pop_back();

    cout << "\n --- Inventario Actualizado---" << endl;
    for (const string &item : inventario)
    {
        cout << "- " << item << endl;
    }

    cout << "\n Total de productos: " << inventario.size() << endl;

    return 0;
}