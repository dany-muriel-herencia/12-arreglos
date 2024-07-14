#include<iostream>
using namespace std;
int main(){
    int a=0,b,n;
    cout<<"ingrese la cantidad de los personas : ";cin>>n;
         struct persona{
    char nombre[20];
    char dni[89];
    int edad;

    }personas[n];

    //implementacion delfor para ingresar los datos

    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre del usuario  "<<i+1<<" :  ";cin.ignore();cin.getline(personas[i].nombre,20);
        cout<<"ingrese el numero de dni del usuario  "<<i+1<<" :  ";cin.ignore();cin.getline(personas[i].dni,89);
        cout<<"ingrese la edad del usuario  "<<i+1<<" :  ";cin>>personas[i].edad;

        //implementacioj de la if para hallar promedios

        a=personas[i].edad+a;
        
        }
        cout<<"usuarios con edad mayor:   \n";
    
    for(int k;k<n;k++){
        if(personas[k].edad>50){
            cout << "Nombre: " << personas[k].nombre << endl;
            cout << "DNI: " << personas[k].dni << endl;
            cout << "Edad: " << personas[k].edad << endl;
            cout << "--------------------------" << endl;

        }
    }

    cout << "Información de todas las personas:\n";
    for (int k = 0; k < n; k++) {
        cout << "Nombre: " << personas[k].nombre << endl;
        cout << "DNI: " << personas[k].dni << endl;
        cout << "Edad: " << personas[k].edad << endl;
        cout << "--------------------------" << endl;
    }

    
    return 0;
}