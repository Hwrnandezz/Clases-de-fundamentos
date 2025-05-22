#include <iostream>

using namespace std;

int main (){

    int numero1;
    /*sirve para crear un ciclo. En este caso el numero que vaya a ingresar
     tiene que ser mayor o igual a 0 en caso que ingrese un negativo el sistema
     se cerrara */ 
    while (numero1 >= 0){

    cout << "Ingresa un numero entero: " <<endl;
    cin >> numero1;
    }

    cout << "El numero ingresado es: " << numero1 << endl;

    return 0;
}