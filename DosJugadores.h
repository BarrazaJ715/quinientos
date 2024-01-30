#ifndef DOSJUGADORES_H_INCLUDED
#define DOSJUGADORES_H_INCLUDED
void MostrarPuntajeMax(int *PuntajeMaximo){
    rlutil::cls();
    rlutil::locate(45,13);
cout << "EL PUNTAJE MAS ALTO FUE: " << *PuntajeMaximo << endl;
    rlutil::locate(40,14);
system("pause");

}
void DosJugadores(int *PuntajeMaximo){
    int Total=0, TotalDos, TotalTotales=0, TotalTotalesDos=0, Rondas=0, PuntosPorRondaDos=0;
    string Nombre, NombreDos;
    int LanzamientoMax=0, LanzamientoMaxDos, PuntosPorRonda=0;
    int NumeroDado[6];

    rlutil::cls();
    rlutil::locate(48, 5);
   cout << "INGRESE NOMBRE DEL JUGADOR 1: " << endl;
   rlutil::locate(55, 6);
   cin >> Nombre;

    rlutil::cls();
    rlutil::locate(48, 5);
   cout << "INGRESE NOMBRE DEL JUGADOR 2: " << endl;
   rlutil::locate(55, 6);
   cin >> NombreDos;

 srand(time(NULL));
while (TotalTotales<=500 && TotalTotalesDos<=500){
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
            return;
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
    return;
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

for (int i=0; i<3; i++){
TotalDos=0;

    rlutil::cls();
    rlutil::locate(39, 7);
cout<<"RONDA: "<< Rondas<< " TURNO: " << i+1 << "  JUGADOR: " << NombreDos << endl;

CargarVector(NumeroDado);
         if (Escalera(NumeroDado)==true){
            Total=500;
            cout << "FELICIDADES SACASTE ESCALERA, GANASTE LA PARTIDA" << endl;
            system ("pause");
            return;
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


    if (LanzamientoMaxDos>=500){
            TotalTotalesDos=500;
        rlutil::locate(39, 13);
        cout << "FELICIDADES! LLEGASTE A 500 PUNTOS " << endl;
        rlutil::locate(32, 15);
        cout << "EL PUNTAJE ACUMULADO DEl JUGADOR "<< NombreDos << " ES DE: " << LanzamientoMaxDos << endl;

    rlutil::locate(32, 16);
    cout<< "presione cualquier tecla para continuar al menu";
    rlutil::anykey();
    return;
        }

        if (Total>PuntosPorRondaDos){
    PuntosPorRondaDos=Total;
}

        rlutil::anykey();
    if (i==2){
 LanzamientoMaxDos+=PuntosPorRondaDos;
    }
        rlutil::locate(43, 15);
cout<< "EL PUNTAJE DEL TURNO ES " << Total<< endl;
   rlutil::anykey();

   if (i==2){
rlutil::locate(42, 17);
cout << "EL PUNTAJE DE LA RONDA ES "<< PuntosPorRondaDos << endl;
PuntosPorRondaDos=0;
}
rlutil::locate(40, 19);
cout << "EL PUNTAJE ACUMULADO TOTAL ES " << LanzamientoMaxDos << endl;
    rlutil::anykey();

    if (*PuntajeMaximo<LanzamientoMaxDos){

    *PuntajeMaximo=LanzamientoMaxDos;

    }
}
}
}


#endif // DOSJUGADORES_H_INCLUDED
