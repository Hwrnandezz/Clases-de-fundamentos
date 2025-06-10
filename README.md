#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        // Menú principal
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Comprar boletos de cine\n";
        cout << "2. Imprimir tabla de multiplicar\n";
        cout << "3. Calcular promedio de 7 notas\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Películas y precios
                string peliculas[4] = {"Avengers", "Mario Bros", "Titanic", "Interstellar"};
                float precios[4] = {5.5, 4.75, 6.0, 5.0};

                cout << "\nPeliculas disponibles:\n";
                for (int i = 0; i < 4; i++) {
                    cout << i + 1 << ". " << peliculas[i] << " - $" << precios[i] << endl;
                }

                int seleccion, cantidad;
                cout << "Seleccione una pelicula (1-4): ";
                cin >> seleccion;
                if (seleccion < 1 || seleccion > 4) {
                    cout << "Seleccion invalida.\n";
                    break;
                }

                cout << "Cantidad de boletos: ";
                cin >> cantidad;
                float total = precios[seleccion - 1] * cantidad;
                cout << "\nResumen de compra:\n";
                cout << "Pelicula: " << peliculas[seleccion - 1] << endl;
                cout << "Cantidad: " << cantidad << endl;
                cout << "Total a pagar: $" << total << endl;
                break;
            }
            case 2: {
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "Tabla de multiplicar del " << numero << ":\n";
                for (int i = 1; i <= 10; i++) {
                    cout << numero << " x " << i << " = " << numero * i << endl;
                }
                break;
            }
            case 3: {
                float nota, suma = 0;
                cout << "Ingrese 7 notas:\n";
                for (int i = 0; i < 7; i++) {
                    cout << "Nota " << i + 1 << ": ";
                    cin >> nota;
                    suma += nota;
                }
                float promedio = suma / 7;
                cout << "Promedio: " << promedio << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}

