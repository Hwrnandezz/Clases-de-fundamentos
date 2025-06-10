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
    Estudiante estudiante1 = {19, "Andres", "00062625", 'M', "Informatica"};

    cout << "Edad: " << estudiante1.edad << endl;
    cout << "Nombre: " << estudiante1.nombre << endl;
    cout << "Carnet: " << estudiante1.carnet << endl;
    cout << "Genero: " << estudiante1.genero << endl;
    cout << "Carrera: " << estudiante1.carrera << endl;

    return 0;
}