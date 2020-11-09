#include<iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string>arreglo;

        arreglo.insertar_inicio("bienvenido");
        arreglo.insertar_inicio("Hola");
        arreglo.insertar_final("al");
        arreglo.insertar_final("mundo");
        
        arreglo.insertar("persona", 2);
        arreglo.eliminar_inicio();
        arreglo.eliminar_final();
        arreglo.eliminar(2);

    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}