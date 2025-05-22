#include <iostream>

using namespace std;

int main (){

    float notas[5];

    for (int i = 0; i < 5; i++){
        cout << "Ingresa la nota: " <<i + 1 <<endl;
        cin >> notas[i];
    }

    //Las notas de primera a ultima ingresada
    for (int i = 0; i < 5; i++)
    {
        cout << "Las notas son: " << notas [i] <<endl;
    }

    cout << "\n";

    //Las notas de manera de ultima ingresada a la primera 
    for (int i = 4; i >= 0; i--)
    {
        cout << "Las notas son: " << notas [i] <<endl;
    }

    return 0;
}