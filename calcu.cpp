#include <iostream>

float suma(float numerouno, float numerodos)
{
    float resultado = 0;

    resultado = numerouno + numerodos;
    return resultado;
}

float resta(float numerouno, float numerodos)
{
    float resultado = 0;
    resultado = numerouno - numerodos;
    return resultado;
}

float multiplicacion(float numerouno, float numerodos)
{
    float resultado = 0;

    resultado = numerouno * numerodos;
    return resultado;
}

float division(float numerouno, float numerodos)
{
    float resultado = 0;

    resultado = numerouno / numerodos;
    return resultado;
}

using namespace std;

int main()
{

    float num1, num2, suma1, num3 = 7, num4 = 56, suma2 = 0, resta1 = 0;

    cout << "Operaciones" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num2;

    suma1 = suma(num1, num2);
    suma2 = suma(num3, num4);
    resta1 = resta(num1, num2);

    cout << "El resultado de la suma es: " << suma1 << endl;
    cout << "El resultado de la segunda suma es: " << suma2 << endl;
    cout << "El resultado de la resta es: " << resta1 << endl;

    return 0;
}