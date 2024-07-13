#include<iostream>
using namespace std;


int main(){
    int a,b,n,c;
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
        
    }
    



    return 0;
}