/*
Vector
1. Tamaño dinamico
2. puede crecer o reducirse
3. funciones
4. flexible ..
5. empty () = vector esta vacio
6. clear() = eliminar todos los elementos
7. front() = primero elelemtos
8. back() = ultimo elemento
9. insert() = insertar elementos en una posicion especifica
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros; // declaramos el vector

    /* Verificar si tiene elementos empty()
     empty() = verificar si esta vacio
    */

    if (numeros.empty())
    {
        cout << "El vector es vacio\n";
    }

    /*push_back() = agregar elementos al final
                    crece el vector
     */

    numeros.push_back(10); // 0
    numeros.push_back(20); // 1
    numeros.push_back(30); // 2

    cout << "\nelementos agregados\n";

    /*size () = tamaño del vector*/

    cout << "Elementos del mi vector" << numeros.size() << endl;

    // mostrar el contenido
    cout << "Contenido del vector\n";
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " , ";
    }

    /*pop_back() = elminiar elementos al final
                   reducirse el vactor
    */
    numeros.pop_back();
    cout << "\nElemento eliminado\n";

    cout << "Elementos del mi vector" << numeros.size() << endl;

    cout << "Contenido del vector\n";
    for (int i = 0; i > numeros.size(); i++)
    {
        cout << numeros[i] << ", ";
    }

    if (numeros.empty())
    {
        cout << "El vector es vacio\n";
    }
    else
    {
        cout << "El vecotr es lleno\n";
    }

    // begin
    numeros.insert(numeros.begin() + 1, 99);

    return 0;
}
