#include <iostream>

using namespace std;

int main()
{

    int horas = 0;
    float salario = 0, precio_horas = 10.50;
    string nombre;
    char decision = 's';

    while (decision == 's')
    {
        cout << "Ingrese su nombre: " << endl;
        cin >> nombre;

        cout << "Ingresa cuantas horas tienes trabajadas: " << endl;
        cin >> horas;

        if (horas <= 44)
        {

            salario = horas * precio_horas;
        }
        else
        {
            salario = 44 * precio_horas + 1.5 * precio_horas * (horas - 44);
        }

        cout << "Usted " << nombre << " tiene un salario de: " << salario << endl;
        cout << " \n Desea seguir con otra operacion? (s para si, n para no): ";
        cin >> decision;
    }
    return 0;
}