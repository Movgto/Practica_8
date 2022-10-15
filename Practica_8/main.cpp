#include <iostream>

using namespace std;

struct info {

    char nombre[100];
    char apellido[100];

}Persona[5];

char Busqueda[100];
void main() {

    for (int i = 0; i < 5; i++) {

        cout << "Favor de ingresar un nombre de la persona " << i + 1 << endl;
        cin >> Persona[i].nombre;
        cout << "Favor de ingresar un apellido de la persona " << i + 1 << endl;
        cin >> Persona[i].apellido;
        cout << "Gracias" << endl;
        system("cls");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 100; j++) {
            if (Persona[i].nombre[j] > 96 && Persona[i].nombre[j] < 123) {
                Persona[i].nombre[j] -= 32;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 100; j++) {
            if (Persona[i].apellido[j] > 96 && Persona[i].apellido[j] < 123) {
                Persona[i].apellido[j] -= 32;
            }
        }
    }

    cout << "Buscar: ";
    cin >> Busqueda;

    for (int j = 0; j < 100; j++) {
        if (Busqueda[j] > 96 && Busqueda[j] < 123) {
            Busqueda[j] -= 32;
        }
    }

    char Buffer[20];

    for (int i = 0; i < 5; i++) {
        if (strcmp(Busqueda, Persona[i].nombre) == 0) {

            strcat_s(Persona[i].nombre, " ");
            strcat_s(Persona[i].nombre, Persona[i].apellido);
            strcat_s(Persona[i].nombre, " ");
            _itoa_s(i + 1, Buffer, 10);
            strcat_s(Persona[i].nombre, Buffer);
            cout << Persona[i].nombre << endl;
        }
    }
    system("PAUSE");
}