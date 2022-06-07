#ifndef CODIGOS_H_INCLUDED
#define CODIGOS_H_INCLUDED

void UnJugador();
void DosJugadores();
void PuntacionMaxima();

void UnJugador(){
    int vDados[5],dados_pregunta,dados_vuelta,Lanzamiento=1,i,posicionDelCambio,Ronda=0,RondasAjugar;
    char continuar='s';
    string nombre;
    cout<<"------------------------------------------"<<endl;
    cout<<"NOMBRE DEL JUGADOR: ";
    cin>>nombre;
    system("cls");
    cout<<"------------------------------------------"<<endl;
    cout<<"CUANTAS RONDAS DESEA JUGAR? (COMO MAXIMO SE PERMITEN 10 RONDAS) : ";
    cin>>RondasAjugar;
    system("cls");
    while(RondasAjugar!=Ronda){
    Lanzamiento=1;
    Ronda++;
        while(continuar!='n'){
        cout<<"TURNO DE "<<nombre<<" | RONDA N "<<Ronda<<" | PUNTAJE TOTAL "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"LANZAMIENTO N "<<Lanzamiento<<endl;
        cout<<"------------------------------------------"<<endl;
        cargarAleatorio(vDados,5,6);
        mostrarVector(vDados,5);
        cout<<endl;
        cout<<endl;
            while(Lanzamiento!=4){
            if(Lanzamiento==1){
            cout<<"CONTINUAR LANZANDO? (S/N): ";
            cin>>continuar;
            cout<<endl;
            if(continuar!='n'){
            cout<<"CUANTOS DADOS VUELVES A TIRAR?: ";
            cin>>dados_pregunta;
            cout<<endl;
            Lanzamiento++;
            }
            else{
                cout<<"PUNTAJE DE LA RONDA: "<<endl;
                cout<<endl;
                system("pause");
                Lanzamiento=4;
            }
            }
            else{
             system("cls");
            cout<<"TURNO DE "<<nombre<<" | RONDA N "<<Ronda<<" | PUNTAJE TOTAL "<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"LANZAMIENTO N "<<Lanzamiento<<endl;
            cout<<"------------------------------------------"<<endl;
            mostrarVector(vDados,5);
            cout<<endl;
            cout<<endl;
            if(Lanzamiento!=3){
            cout<<"CONTINUAR LANZANDO? (S/N): ";
            cin>>continuar;
            cout<<endl;
            cout<<"CUANTOS DADOS VUELVES A TIRAR?: ";
            cin>>dados_pregunta;
            cout<<endl;
            Lanzamiento++;
            }
            else{
                Lanzamiento++;
                dados_pregunta=0;
                cout<<"PUNTAJE DE LA RONDA: "<<endl;
                cout<<endl;
                system("pause");
            }
            }
            if(dados_pregunta==5){
                cargarAleatorio(vDados,5,6);
            }
            else{
                for(i=1;i<=dados_pregunta;i++){
                cout<<"CUAl?: ";
                cin>>dados_vuelta;
                cargarAleatorio(&posicionDelCambio,1,6);
                vDados[dados_vuelta-1]=posicionDelCambio;
            }
            }
            cout<<endl;
            }
        if(Lanzamiento==4){
            continuar='n';
        }

        }
    system("cls");
    cout<<"------------------------------------------"<<endl;
    cout<<" RONDA N "<<Ronda<<endl;
    cout<<endl;
    cout<<" PUNTAJE "<<nombre<<": PUNTOS"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<endl;
    system("pause");
    system("cls");
    continuar='s';
    }
}
///DOS JUGADORES ----------------------------------------------------------------------------

void DosJugadores(){
    int vDados[5],dados_pregunta,dados_vuelta,Lanzamiento=1,i,posicionDelCambio,Ronda=1,cambioNombres,RondasAjugar;
    char continuar='s';
    string nombre[2];
    for(i=0;i<=1;i++){
    cout<<"------------------------------------------"<<endl;
    cout<<"NOMBRE DEL JUGADOR "<<i+1<<" : ";
    cin>>nombre[i];
    }
    system("cls");
    cout<<"------------------------------------------"<<endl;
    cout<<"CUANTAS RONDAS DESEA JUGAR? (COMO MAXIMO SE PERMITEN 10 RONDAS) : ";
    cin>>RondasAjugar;
    system("cls");
    cambioNombres=0;
    while(RondasAjugar>=Ronda){
    Lanzamiento=1;
        while(continuar!='n'){
        cout<<"TURNO DE "<<nombre[cambioNombres]<<" | RONDA N "<<Ronda<<" | PUNTAJE TOTAL "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"LANZAMIENTO N "<<Lanzamiento<<endl;
        cout<<"------------------------------------------"<<endl;
        cargarAleatorio(vDados,5,6);
        mostrarVector(vDados,5);
        cout<<endl;
        cout<<endl;
            while(Lanzamiento!=4){
            if(Lanzamiento==1){
                cout<<"CONTINUAR LANZANDO? (S/N): ";
                cin>>continuar;
                cout<<endl;
                if(continuar!='n'){
                cout<<"CUANTOS DADOS VUELVES A TIRAR?: ";
                cin>>dados_pregunta;
                cout<<endl;
                Lanzamiento++;
                }
                else{
                    cout<<"PUNTAJE DE LA RONDA: "<<endl;
                    cout<<endl;
                    Lanzamiento=4;
                    system("pause");
                }
                }
                else{
                system("cls");
                cout<<"TURNO DE "<<nombre[cambioNombres]<<" | RONDA N "<<Ronda<<" | PUNTAJE TOTAL "<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"LANZAMIENTO N "<<Lanzamiento<<endl;
                cout<<"------------------------------------------"<<endl;
                mostrarVector(vDados,5);
                cout<<endl;
                cout<<endl;
                if(Lanzamiento!=3){
                    cout<<"CONTINUAR LANZANDO? (S/N): ";
                    cin>>continuar;
                    cout<<endl;
                    cout<<"CUANTOS DADOS VUELVES A TIRAR?: ";
                    cin>>dados_pregunta;
                    cout<<endl;
                    Lanzamiento++;
                }
                else{
                    Lanzamiento++;
                    dados_pregunta=0;
                    cout<<"PUNTAJE DE LA RONDA: "<<endl;
                    cout<<endl;
                    system("pause");
                }
                }
                if(dados_pregunta==5){
                    cargarAleatorio(vDados,5,6);
                }
                else{
                    for(i=1;i<=dados_pregunta;i++){
                    cout<<"CUAl?: ";
                    cin>>dados_vuelta;
                    cargarAleatorio(&posicionDelCambio,1,6);
                    vDados[dados_vuelta-1]=posicionDelCambio;
                }
                }
                cout<<endl;
                }
            if(Lanzamiento==4){
                continuar='n';
            }
            }
        if(cambioNombres==0){
            cambioNombres++;
        }
        else if (cambioNombres==1){
            cambioNombres--;
            Ronda++;
        }

        system("cls");
        cout<<"------------------------------------------"<<endl;
        cout<<" RONDAS N: "<<Ronda<<endl;
        cout<<" PROXIMO TURNO: "<<nombre[cambioNombres]<<endl;
        cout<<endl;
        cout<<" PUNTAJE "<<nombre[0]<<": PUNTOS"<<endl;
        cout<<" PUNTAJE "<<nombre[1]<<": PUNTOS"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
        system("pause");
        system("cls");
        continuar='s';
    }

}

void PuntacionMaxima(){

}
#endif // CODIGOS_H_INCLUDED
