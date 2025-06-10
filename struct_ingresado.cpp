#include <iostream>
using namespace std;

struct Estudiante
{
    int edad;
    string nombre;
    string carnet;
    char genero;
    string carrera;
};

int main()
{

    int cantidad;

    cout << "Ingrese la cantidad de alumnos: " << endl;
    cin >> cantidad;

    Estudiante estudiantes[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingresa la edad: " << i + 1 << endl;
        cin >> estudiantes[i].edad;

        cout << "Ingresa el nombre: " << endl;
        cin >> estudiantes[i].nombre;

        cout << "Ingresa el carnet: " << endl;
        cin >> estudiantes[i].carnet;

        cout << "Ingresa el genero: " << endl;
        cin >> estudiantes[i].genero;

        cout << "Ingresa la carrera: " << endl;
        cin >> estudiantes[i].carrera;
    }
    for (int j = 0; j < cantidad; j++)
    {
        cout << "Edad: " << estudiantes[j].edad << endl;
        cout << "Nombre: " << estudiantes[j].nombre << endl;
        cout << "Carnet: " << estudiantes[j].carnet << endl;
        cout << "Genero: " << estudiantes[j].genero << endl;
        cout << "Carrera: " << estudiantes[j].carrera << endl;
    }
    return 0;
}