#include <iostream>
using namespace std;

int main(){
    string nombre;
    int opcion = 0;
    int salida;

    cout<<"Menu para el almuerzo"<<endl;

    do{
        cout<<"Opciones de platos\nseleccione una opcion"<<endl;
        cout<<"1. - Comida china"<<endl;
        cout<<"2. - Comida Mexicana"<<endl;
        cout<<"3. - Diferentes platillos de pollo"<<endl;
        cout<<"4. - Comida Italiana"<<endl;
        cout<<"5. - Pupusas"<<endl;
        cout<<"6. - Salir"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Patas de pollo"<<endl;
            cout<<"Sopa de murcielago"<<endl;
        break;
        case 2:
            cout<<"Tacos de nopal"<<endl;
            cout<<"Chapulines tostados"<<endl;
        break;
        case 3:
            cout<<"Pollo a la bigcola"<<endl;
            cout<<"Menudos en salsa"<<endl;
        break;
        case 4:
             cout<<"Ensalada de monte"<<endl;
              cout<<"Lasagna de garrobo"<<endl;
        break;
        case 5:
            cout<<"Pupusas de iguana"<<endl;
            cout<<"Pupusas de pacaya"<<endl;
        break;
        case 6:
            cout<<"Gracias"<<endl;
        break;

        }
        cout<<"0 para salir 1 para continuar"<<endl;
        cin>>salida;

    }
    while (salida == 1);


    return 0;
}