#include <iostream>
using namespace std; 
int main ()
{
    int n, i = 0, primo;
    cout << "Ingrese un numero ";
    cin >> n;

    for (i=n-1; i>=n/2;i--)
{
    if (n%i)
    {
        primo ==0;
        break;
    }
}
if (primo)
{
    cout << "Su numero es primo";
}
else 
{
    cout << "Su numnero no es primo";
}

return 0;



}