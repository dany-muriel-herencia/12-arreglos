#include<iostream>
using namespace std;
int main(){
    int a,b,n;
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
    }
    return 0;
}