#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;

#include "Funciones.h"
#include "Codigos.h"

int main()
{
    int opcion;
    while(true){
        cout<<endl;
        cout<<"\n\t\t\t\t\t --------------------"<<endl;
        cout<<"\n\t\t\t\t\t       GENERALA"<<endl;
        cout<<"\n\t\t\t\t\t 1. UN JUGADOR"<<endl;
        cout<<"\n\t\t\t\t\t 2. DOS JUGARORES"<<endl;
        cout<<"\n\t\t\t\t\t 3. PUNTUACION MAXIMA"<<endl;
        cout<<"\n\t\t\t\t\t 0. FIN DEL JUEGO"<<endl;
        cout<<"\n\t\t\t\t\t --------------------"<<endl;
        cout<<"\n\t\t\t\t\t OPCION: ";
        cin>>opcion;
        system("cls");

        switch(opcion){
            case 1:
                UnJugador();
            break;
            case 2:
                DosJugadores();
            break;
            case 3:
                PuntacionMaxima();
            break;
            case 0:
                cout<<"FIN DEL JUEGO"<<endl;
                return 0;
            break;
        }

    }
    system("pause");
    return 0;
}
