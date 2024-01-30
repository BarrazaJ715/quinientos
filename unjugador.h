#ifndef UNJUGADOR_H_INCLUDED
#define UNJUGADOR_H_INCLUDED

void UnJugador(int* PuntajeMaximo){

    rlutil::cls();

    int NumeroDado[6];
    int Total=0, TotalTotales=0, Rondas=0;
    int LanzamientoMax=0, PuntosPorRonda=0;
    string Nombre;


rlutil::locate(48, 5);
   cout << "INGRESE SU NOMBRE: " << endl;
   rlutil::locate(55, 6);
   cin >> Nombre;

  srand(time(NULL));
while (TotalTotales<=500){
   Rondas++;

for (int i=0; i<3; i++){
Total=0;

    rlutil::cls();
    rlutil::locate(39, 7);
cout<<"RONDA: "<< Rondas << " TURNO: " << i+1 << "  JUGADOR: " << Nombre << endl;

CargarVector(NumeroDado);
         if (Escalera(NumeroDado)==true){
            Total=500;
            cout << "FELICIDADES SACASTE ESCALERA, GANASTE LA PARTIDA" << endl;
            system ("pause");
            return ;
         }
        else if (SeisIguales(NumeroDado)==true){
            Total=0;
            PuntosPorRonda=0;
            i=3;
        }
    else if(MultiplicarPorCincuenta(NumeroDado)!=0){
        Total=MultiplicarPorCincuenta(NumeroDado);
   }
    else if (MultiplicarPorDiez(NumeroDado)!=0){
    Total=MultiplicarPorDiez(NumeroDado);
   }
    else{Total=SumarVector(NumeroDado);
    }


    if (LanzamientoMax>=500){
            TotalTotales=500;
        rlutil::locate(39, 13);
        cout << "FELICIDADES! LLEGASTE A 500 PUNTOS " << endl;
        rlutil::locate(32, 15);
        cout << "EL PUNTAJE ACUMULADO DEl JUGADOR "<< Nombre << " ES DE: " << LanzamientoMax << endl;

    rlutil::locate(32, 16);
    cout<< "presione cualquier tecla para continuar al menu";
    rlutil::anykey();
    return ;
        }

        if (Total>PuntosPorRonda){
    PuntosPorRonda=Total;
}

        rlutil::anykey();
    if (i==2){
 LanzamientoMax+=PuntosPorRonda;
    }
        rlutil::locate(43, 15);
cout<< "EL PUNTAJE DEL TURNO ES " << Total<< endl;
   rlutil::anykey();

   if (i==2){
rlutil::locate(42, 17);
cout << "EL PUNTAJE DE LA RONDA ES "<< PuntosPorRonda << endl;
PuntosPorRonda=0;
}
rlutil::locate(40, 19);
cout << "EL PUNTAJE ACUMULADO TOTAL ES " << LanzamientoMax<< endl;
    rlutil::anykey();

    if (*PuntajeMaximo<LanzamientoMax){

    *PuntajeMaximo=LanzamientoMax;

    }

}
}
}

#endif // 1JUGADOR_H_INCLUDED
