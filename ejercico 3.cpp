/*. Crear un programa que pida datos de n personas: nombre, día de nacimiento, mes de nacimiento, y año de 
nacimiento (que se deben almacenar en un arreglo de registros). Después deberá repetir lo siguiente: preguntar
 un número de mes y mostrar en pantalla los datos de las personas que cumplan los años durante ese mes. Terminará 
 de repetirse cuando se teclee 0 como número de mes*/
#include<iostream>
using namespace std;

struct Registros {
    char nombres[123];
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;
    cout << "Digite la cantidad de personas: ";
    cin >> n;
    cin.ignore(); // Ignorar el salto de línea previo para evitar problemas con getline

    Registros personas[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite un Nombre: ";
        cin.getline(personas[i].nombres, 123);
        cout << "Digite su día de nacimiento: ";
        cin >> personas[i].dia;
        cout << "Digite su mes de nacimiento: ";
        cin >> personas[i].mes;   
        cout << "Digite su año de nacimiento: ";
        cin >> personas[i].anio;
        cin.ignore(); 
        cout << "------------------------------------" << endl;
    }

    //aplicaremos 
    int y;
    cout << "ingrese un mes randon : ";cin>>y;

    for(int k=0;k<n;k++){

        if (personas[k].mes==y){
             cout << " su Nombre: ";
        cout<<personas[k].nombres;
        cout << " su día de nacimiento: ";
        cout << personas[k].dia;
        cout << " su mes de nacimiento: ";
        cout << personas[k].mes;   
        cout << " su año de nacimiento: ";
        cout << personas[k].anio;
        }
        else if (y==0){
            k=personas[k].mes;

        }
    }


    return 0;
}