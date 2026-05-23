#include <iostream>

using namespace std;

// definiciono de estructura nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// function para insertar un elemento en la cola (enqueue)
void enqueue(Nodo * &frente, Nodo * &fin, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;
    if (fin == nullptr)
    {
        frente = fin = nuevo;
    }
    else
    {
        fin->siguiente = nuevo;
        fin = nuevo;
    }

    cout << "Elemento " << valor << " agregado a la cola. \n"
         << endl;
}

// funcion para eliminar un elemento de la cola (dequeu)
void dequeue(Nodo * &frente, Nodo * &fin)
{
    if (frente == nullptr)
    {
        cout << "La cola esta vacia. \n";
        return;
    }

    Nodo *temp = frente;
    cout << "Elemento eliminado:" << temp->dato << endl;
    frente = frente->siguiente;
    if (frente == nullptr)
    {
        fin = nullptr;
    }
    delete temp;
}

// funcion para mostrar la cola
void mostrar(Nodo * frente)
{
    if (frente == nullptr)
    {
        cout << "La cola esta vacia. \n";
        return;
    }
    cout << "Elementos de la cola. \n";
    while (frente != nullptr)
    {
        cout << frente->dato << " ->";
        frente = frente->siguiente;
    }
    cout << "NULL \n"
         << endl;
}

int main()
{
    Nodo* frente = nullptr;
    Nodo* fin = nullptr;
    
    // Aquí puedes agregar tu código para el menú
    
    return 0;
}