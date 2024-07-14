/*Se desea gestionar información de atletas olímpicos (nombres, país, disciplina, número de medallas)
. Desarrolle un programa que lea en un arreglo de registros los datos de n atletas y luego lea el nombre 
de un país. El programa deberá mostrar los atletas registrados que provienen de ese país y debe indicar
 cuál es el atleta con mayor número de medallas de ese país.*/
 #include<iostream>
 using namespace std;
struct olimpicos{
    char nombres[342];
    char pais[99];
    char disiplina[99];
    int medallas;
};

int main(){
    int n,d;

    cout<<" ingrese la cantidad de atletas : ";cin>>n;

    olimpicos personas[n];

    for (int i = 0; i < n; i++){

    

    cout<<"ingrese el nombre del usuario  "<<i+1<<" :  ";cin.ignore();cin.getline(personas[i].nombres,340);
    cout<<"ingrese el numero de dni del usuario  "<<i+1<<" :  ";cin.ignore();cin.getline(personas[i].pais,99);
    cout<<"ingrese el numero de dni del usuario  "<<i+1<<" :  ";cin.ignore();cin.getline(personas[i].disiplina,99);
    cout<<"ingrese la edad del usuario  "<<i+1<<" :  ";cin>>personas[i].medallas;

    }
    return 0;
}