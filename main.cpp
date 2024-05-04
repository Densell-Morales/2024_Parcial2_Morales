#include <filesystem>
#include <iostream>
#include <filesystem>
#include <fstream>
#include "windows.h"

using namespace std;
void crearNcantArchivos(int cantidad);

int main()
{

    cout << "Opcion seleccionada -> Crear Archivos" << endl;
    int cantidad;
    cout << "Ingrese la cantidad de archivos que desea crear" << endl;
    cin >> cantidad;
    crearNcantArchivos(cantidad);
    return 0;
}

void crearNcantArchivos(int cantidad){
    string nombreArchivo = "file";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;

        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/gallo/Desktop/par/" + nombreArchivo + to_string(i + 1) + ".txt");
            cout << "Agregando texto No." << i+1 << endl;
            for (int j = 0; j < i+1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/gallo/Desktop/impar/" + nombreArchivo + to_string(i + 1) + ".txt");
            cout << "Agregando texto No." << i+1 << endl;
               for (int j = 0; j < i+1; ++j) {
                file << "linea de texto" << endl;
            }
            file.close();
        }

    }
}

