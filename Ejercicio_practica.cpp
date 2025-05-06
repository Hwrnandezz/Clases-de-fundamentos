#include <iostream>
using namespace std;

int main()
{

    float nota;
    char grado;

    cout << "Ingresa la nota: " << endl;
    cin >> nota;
    if (nota > 100)
    {
        cout << "El metodo de calificación va de 0-100, la nota ingresada es invalida." << endl;
    }

    else if (nota >= 90)
    {
        grado = 'A';
    }
    else if (nota < 90 && nota >= 85)
    {
        
        grado = 'B';
    }
    else if (nota < 85 && nota >= 80)
    {
        grado = 'C';
    }
    else if (nota < 80 && nota >= 70)
    {
        grado = 'D';
    }
    else if (nota < 70 && nota >= 69)
    {
        grado = 'E';
    }
    else
    {
        grado = 'F';
    }

    switch (grado)
    {
    case 'A':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    case 'B':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    case 'C':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    case 'D':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    case 'E':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    case 'F':
        cout << "La calificacion es: " << nota << " y el grado es: " << grado << endl;
        break;
    default:
        break;
    }

    return 0;
}