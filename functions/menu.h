#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
using namespace std;

class menu{
    private:
        string nombre;
        string telefono;
        string domicilio;
        string codigo;
        string fregistro;

    public:
        void capturarClientes();
        void mostrarClientes();
        void modificarClientes();
        void detalleClientes();
        void eliminarCliente();
        void modificarRegistro(string codigo);
};


#endif // MENU_H