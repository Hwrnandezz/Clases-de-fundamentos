#include <iostream>

using namespace std;

int main()
{

    int numero = 0;

    cout << "El viernes 20 de junio es asueto" << endl;
    cout << "Vamos a imprimir numeros" << endl;

    do
    {
        cout << "Imprimir enteros: " << numero;
        cout << endl;
        numero++;
    } while (numero <= 15);

    return 0;
}