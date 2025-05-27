#include <iostream>

using namespace std;

int main (){

    int numero, suma = 0, posicion = 0;

    int sumatoria [25] = {0};

    cout << "Ingrese un numero entero: " << endl;
    cin >> sumatoria [posicion];

    while (sumatoria [posicion]  >= 0){

        suma = suma + sumatoria [posicion];
        posicion ++;
        cout << "Ingrese otro numero entero: " << endl;
        cin >> sumatoria[posicion];

        
    }
    cout << "La suma de los numeros es: " << suma << endl;
    
    return 0;
}