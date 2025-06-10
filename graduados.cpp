#include <iostream>
using namespace std;

struct Estudiante
{
    int edad;
    string nombre;
    string carnet;
    float cum;
};

float calcum(float notas[], int uv[], int n)
{
    float suma = 0;
    int sumauv = 0;

    for (int i = 0; i < n; i++)
    {
        suma += notas[i] * uv[i];
        sumauv += uv[i];
    }

    return (sumauv == 0) ? 0 : suma / sumauv;
}

int main()
{
    const int materias = 3;
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    Estudiante estudiantes[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Estudiante: " << (i + 1) << endl;

        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        cout << "Carnet: ";
        cin >> estudiantes[i].carnet;

        cout << "Edad: ";
        cin >> estudiantes[i].edad;

        float notas[materias];
        int uv[materias];

        for (int j = 0; j < materias; j++)
        {
            cout << "Materia: " << (j + 1) << endl;
            cout << "Nota: ";
            cin >> notas[j];

            cout << "Unidades valorativas: ";
            cin >> uv[j];
        }

        estudiantes[i].cum = calcum(notas, uv, materias);
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Estudiante: " << estudiantes[i].nombre << endl;
        cout << "Carnet: " << estudiantes[i].carnet << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "CUM: " << estudiantes[i].cum << endl;

        if (estudiantes[i].cum >= 7.0)
            cout << "Estado: Se gradua";
        else
            cout << "Estado: No se gradua";
    }

    return 0;
}
