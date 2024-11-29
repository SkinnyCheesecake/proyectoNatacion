#include <iostream>
#include "functions/menu.h"

using namespace std;
int main(){

    int opcion = 0;
    string codigo;

    cout << "Bienvenido administrador" << endl;
    cout << "Que accion realizara:" << endl;
    cout << "\n\t[1] Registrar cliente. \n\t[2] Mostrar clientes. \n\t[3] Buscar clientes. \n\t[4] Modificar clientes. \n\t[5] Disponibilidad de los instructores. \n\t[6] Promociones. \n\t[7] Salir. \n" << endl; 

    cout << ">> "; 

    menu m;
    cin >> opcion;
    cin.ignore();

do{
    switch (opcion)
    {
    case 1:
        //m.capturarClientes();
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    case 2:
        //m.mostrarClientes();
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    
    case 3:
        //m.modificarClientes();
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    
    case 4:
        //m.detalleClientes();
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    
    case 5:
        //m.eliminarCliente();
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    
    case 6:
        //cout << "Ingrese el codigo del cliente:";
        //getline(cin, codigo);
        //m.modificarRegistro(codigo);
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    
    case 7:
        //cout << "Saliendo del programa" << endl;
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;

    default:
        //cout << "Esa opcion no es valida. Intenta de nuevo" << endl;
        cout << "Esta es la opcion" << opcion << "... wow" << endl;
        break;
    }  
}while(opcion != 7);
    return 0;
}