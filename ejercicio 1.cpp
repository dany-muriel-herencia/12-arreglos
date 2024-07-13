#include<iostream>
using namespace std;


int main(){
    int a,b,n,ma=000,me=67946889;
    cout<<"ingrese la cantidad de los empleados: ";cin>>n;
         struct personal{
    char nombre[20];
    char sexo[89];
    int sueldo;

    }empleados[n];
    for(int i=0;i<n;i++){
        cout<< "digite el nombre : ";
        cin.ignore();cin.getline(empleados[i].nombre,20);
        cout<<"digite el sexo : ";
        cin.ignore();cin.getline(empleados[i].sexo,89);
        cout <<"digite el sueldo : ";
        cin>>empleados[i].sueldo;

        if(empleados[i].sueldo < me){
            me = empleados[i].sueldo;
            a=i;
        }
        if(empleados[i].sueldo > ma){
            ma=empleados[i].sueldo;
            b=i;

        }
    }
    cout << "salario mayor \n ";
    cout << "Nombre: " << empleados[a].nombre << "\n";
    cout << "Con un sueldo de: " << empleados[a].sueldo << "\n";

    cout << "salario menor\n";
    cout << "Nombre: " << empleados[b].nombre << "\n";
    cout << "Con un sueldo de: " << empleados[b].sueldo << "\n";



    return 0;
}