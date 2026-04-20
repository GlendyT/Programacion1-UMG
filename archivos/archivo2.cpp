/*
1. Archivo
2. txt
3. guardar
4.actualizar
5. eliminar
6. visualizar

for para guardar los datos
 */

#include <iostream>
#include <fstream>
using namespace std;

const string NOMBRE_ARCHIVO = "datos.txt";

void visualizar()
{
    ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    int lineaNum = 1;

    // visualizar el archivo
    while (getline(archivo, linea))
    {
        cout << lineaNum++ << ": " << linea << endl;
        }

    archivo.close();
}

int main()
{

    int opcion;
    do
    {

        cout << "\n ******Gestion de archivos*******\n"
             << endl;
        cout << "1. Visualizar datos \n";
        cout << "2. Agregar datos \n";
        cout << "3. Eliminar datos \n";
        cout << "4. Actualizar datos \n";
        cout << "5. Salir \n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            visualizar();
            break;

        case 2:
            escribirDatos();
            break;
        case 3:
            eliminarDatos();
            break;
        case 4:
            updateDatos();
            break;
        case 5:
            cout << "Saliendo del programa. Gracias por usar el programa...." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }

    } while (opcion != 5);

    return 0;
}