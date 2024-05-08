#include <iostream>
using namespace std;
int main ()
{
    int n, b;
    cout << "Ingrese un numero ";
    cin >> n;

    for (b = 0; b < n; b=b+2)
    {
        cout << b;
    }
return 0;
}