#include <iostream>
using namespace std;
int main ()
{
    char opcion, n='X';
    do
    {
        cout << "MENU" << endl << endl;
        cout << "A. Pizza" << endl;
        cout << "B. Pollo" << endl;
        cout << "C. Carne" << endl;
        cout << "D. Tortillas" << endl;
        cout << "E. Tacos" << endl;
        cout << "Presione X para salir del menu" << endl;
        cout << "Seleccione una opcion "<< endl;
        cin >> opcion;
        cout << "Opcion seleccionada: " << opcion << endl;

    } while (opcion != n);

    return  0;
    
}