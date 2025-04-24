#include <iostream>
using namespace std;
// libreria de entradas y salidas
int main()
{
    int numero, sumaTotal, residuo;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    // Los numeros deben estar entrw 2 y 100 incluidos ellos

    if (numero < 2)
    {
        cout << "El numero no es valido";
    }
    else
    {
        if (numero >= 2 && numero <= 100)
        {
            residuo = numero % 2;
            if (residuo == 0)
            {
                sumaTotal = numero + sumaTotal;

                cout << "La suma es: " << sumaTotal << endl;
            }
            else
            {
                cout << "El numero es impar";
            }
        }
        else
        {
            cout << "El numero no es valido";
        }
    }

    return 0;
}