/*Se desea gestionar información de atletas olímpicos (nombres, país, disciplina, número de medallas)
. Desarrolle un programa que lea en un arreglo de registros los datos de n atletas y luego lea el nombre 
de un país. El programa deberá mostrar los atletas registrados que provienen de ese país y debe indicar
 cuál es el atleta con mayor número de medallas de ese país.*/
#include <iostream>
#include <cstring> // Para utilizar strcmp
using namespace std;

struct Olimpico {
    char nombres[342];
    char pais[99];
    char disciplina[99];
    int medallas;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;

    Olimpico personas[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta " << i + 1 << ": ";
        cin.ignore();
        cin.getline(personas[i].nombres, 342);
        cout << "Ingrese el país del atleta " << i + 1 << ": ";
        cin.getline(personas[i].pais, 99);
        cout << "Ingrese la disciplina del atleta " << i + 1 << ": ";
        cin.getline(personas[i].disciplina, 99);
        cout << "Ingrese el número de medallas del atleta " << i + 1 << ": ";
        cin >> personas[i].medallas;
    }

    char paisConsulta[99];
    cout << "Ingrese el nombre del país a consultar: ";
    cin.ignore();
    cin.getline(paisConsulta, 99);

    int maxMedallas = -1;
    Olimpico* atletaMaxMedallas = nullptr;

    cout << "Atletas de " << paisConsulta << ":\n";
    bool hayAtletas = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(personas[i].pais, paisConsulta) == 0) {
            hayAtletas = true;
            cout << "Nombre: " << personas[i].nombres << endl;
            cout << "Disciplina: " << personas[i].disciplina << endl;
            cout << "Número de Medallas: " << personas[i].medallas << endl;
            cout << "--------------------------" << endl;

            if (personas[i].medallas > maxMedallas) {
                maxMedallas = personas[i].medallas;
                atletaMaxMedallas = &personas[i];
            }
        }
    }

    if (!hayAtletas) {
        cout << "No se encontraron atletas de " << paisConsulta << ".\n";
    } else if (atletaMaxMedallas != nullptr) {
        cout << "El atleta con más medallas de " << paisConsulta << " es:\n";
        cout << "Nombre: " << atletaMaxMedallas->nombres << endl;
        cout << "Disciplina: " << atletaMaxMedallas->disciplina << endl;
        cout << "Número de Medallas: " << atletaMaxMedallas->medallas << endl;
    }

    return 0;
}
