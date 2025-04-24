#include <iostream>
using namespace std;
// libreria de entradas y salidas
int main()
{
    float numero1, numero2, suma, resta, multiplicacion, division;

    cout << "Ingresa el primer numero: ";
    cin >> numero1;

    cout << "ingrese el segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

    resta = numero1 - numero2;
    cout << "La resta de " << numero1 << " y " << numero2 << " es: " << resta << endl;

    multiplicacion = numero1 * numero2;
    cout << "La multiplicación de " << numero1 << " y " << numero2 << " es: " << multiplicacion << endl;

    division = numero1 / numero2;
    cout << "La división de " << numero1 << " y " << numero2 << " es: " << division << endl;

    return 0;
}