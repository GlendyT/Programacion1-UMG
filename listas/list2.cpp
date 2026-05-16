#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// Insertar

void insertar(Nodo *&cabeza, int valor)
{

    Nodo *nuevo = new Nodo{valor, nullptr};
    if (cabeza == nullptr)
    {
        cabeza = nuevo;
    }
    else
    {
        Nodo *actual = cabeza;
        while (actual->siguiente != nullptr)
        {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

// Buscar

bool buscar(Nodo *cabeza, int valor)
{

    Nodo *actual = cabeza;
    while (actual != nullptr)
    {
        if (actual->dato == valor)
            return true;
        actual = actual->siguiente;
    }
    return false;
}

// Mostrar
void mostrar(Nodo *cabeza)
{

    Nodo *actual = cabeza;
    cout << "Lista: ";
    while (actual != nullptr)
    {
        cout << actual->dato << " ->";
        actual = actual->siguiente;
    }
    cout << "NULL" << endl;
}

// eliminar
bool eliminar(Nodo *&cabeza, int valor)
{
    Nodo *actual = cabeza;
    Nodo *anterior = nullptr;

    while (actual != nullptr && actual->dato != valor)
    {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr)
    {
        return false; // no encontrado
    }

    if (anterior == nullptr)
    {
        cabeza = actual->siguiente;
    }
    else
    {
        anterior->siguiente = actual->siguiente;
    }
    delete actual;
    return true;
}

int main()
{
    Nodo *lista = nullptr;
    int opcion, valor;

    do
    {
        cout << "\n MENU\n";
        cout << "1. Insertar\n";
        cout << "2. Mostrar\n";
        cout << "3. Buscar\n";
        cout << "4. Eliminar\n";
        cout << "5. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese un valor a insertar: ";
            cin >> valor;
            insertar(lista, valor);
            break;
        case 2:
            mostrar(lista);
            break;
        case 3:
            cout << "Ingrese un valor a buscar: ";
            cin >> valor;
            if (buscar(lista, valor))
                cout << "Elemento encontrado. \n";
            else
                cout << "Elemento NO encontrado. \n";
            break;
        case 4:
            cout << "Ingrese el numero a eliminar.\n";
            cin >> valor;
            if (eliminar(lista, valor))
                cout << "Elemento eliminado.\n";
            else
                cout << "Elemento NO eliminado.\n";
            break;

        case 5:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo.\n";
            break;
        }
    } while (opcion != 5);

    return 0;
}
