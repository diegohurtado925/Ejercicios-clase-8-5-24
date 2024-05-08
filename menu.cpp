#include <iostream>
using namespace std;
int main()
{
    char n;

    cout << "SELECCIONE UN PLATO DE COMIDA" << endl
         << endl
         << "MENU" << endl
         << endl
         << "A. Pizza" << endl
         << "B. Pollo" << endl
         << "C. Carne" << endl
         << "D. Tortillas" << endl
         << "E. Tacos" << endl
         << "Presione X para salir del meni" << endl
         << endl;

    while (n!='X')
    {
        cout << endl << "Seleccione una opcion: ";
        cin >> n;
        switch (n)
        {
        case 'a':
        case 'A':
            cout << "Opcion seleccionada: Pizza" << endl;
            break;

        case 'b':
        case 'B':
            cout << "Opcion seleccionada: Pollo" << endl;
            break;

        case 'c':
        case 'C':
            cout << "Opcion seleccionada: Carne" << endl;
            break;

        case 'd':
        case 'D':
            cout << "Opcion seleccionada: Tortillas" << endl;
            break;

        case 'e':
        case 'E':
            cout << "Opcion seleccionada: Tacos" << endl;
            break;

        case 'x':
            cout << "Saliendo del menu" << endl;
            break;

        case 'X':
            cout << "Saliendo del menu" << endl;
            break;

        default:
            cout << "No valido" << endl;
            break;
        }
    }
    return 0;
}