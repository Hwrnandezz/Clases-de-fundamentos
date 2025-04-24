#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, promedio;

    cout << "Este programa fue realizado para que el usuario obtenga su promedio y observar si a aprobado o reprobado." << endl;

    cout << "Ingresa la primera nota: " << endl;
    cin >> nota1;

    cout << "Ingresa la segunda nota: " << endl;
    cin >> nota2;

    cout << "Ingresa la tercera nota: " << endl;
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio < 6)
    {
        cout << "El promedio a sido bajo de 6 por lo cual a sido reprobado. " << promedio << endl;
    }
    else
    {
        cout << "El promedio a sido mayor a 6 por lo cual a sido aprobado. " << promedio << endl;
    }

    return 0;
}