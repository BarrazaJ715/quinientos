#ifndef MENUPRINCIPAL_H_INCLUDED
#define MENUPRINCIPAL_H_INCLUDED

void MenuPrincipal(){


rlutil::setBackgroundColor(rlutil::COLOR::LIGHTCYAN);

int opcion, PuntajeMaximo=0;

while (true){

    rlutil::cls();
    rlutil::setColor(rlutil::COLOR::BLACK );

    rlutil::locate(42, 4);
    cout<< "-------------------------------" << endl;

     rlutil::locate(48, 5);
    cout<< "1)- 1 JUGADOR" << endl;

     rlutil::locate(48, 6);
    cout<< "2)- 2 JUGADORES" << endl;

     rlutil::locate(48, 7);
    cout<< "3)- REGLAS DEL JUEGO" << endl;

    rlutil::locate(48, 8);
    cout<< "4)- PUNTACION MAXIMA" << endl;

    rlutil::locate(48, 9);
    cout<< "0)- SALIR DEL JUEGO" << endl;

    rlutil::locate(42, 10);
    cout<< "-------------------------------" << endl;


  rlutil::locate(48, 11);
    cout<< "INGRESE UNA OPCION: ";
    cin>> opcion;


   switch (opcion){

case 0:
    rlutil::locate(55, 13);
    cout<< "ADIOS"<< endl;
    return;
break;

case 1:UnJugador(&PuntajeMaximo);

    break;
case 2:DosJugadores(&PuntajeMaximo);
    break;

case 3: Reglas();
    break;

case 4: MostrarPuntajeMax(&PuntajeMaximo);

break;

default:
  rlutil::setColor(rlutil::COLOR::RED);
    rlutil::locate(47, 13);
    cout <<(char)158<<(char)158<<" OPCION INCORRECTA "<<(char)158<<(char)158<<endl;
    rlutil::locate(42, 14);
 system("pause");

break;

    }

}

}
#endif // MENUPRINCIPAL_H_INCLUDED
