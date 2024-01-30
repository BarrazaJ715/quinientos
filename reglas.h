#ifndef REGLAS_H_INCLUDED
#define REGLAS_H_INCLUDED

void Reglas(){
rlutil::cls();
rlutil::locate(1, 3);

cout << "El objetivo del juego es obtener al menos 500 puntos en la menor cantidad posible de  rondas, ";
cout<< "o sacar una escalera en un lanzamiento.";
cout<< "Una ronda esta compuesta por 3 lanzamientos.";
cout << endl;
cout << endl;
cout<< "Un lanzamiento consiste en tirar seis dados y evaluar sus valores para determinar el puntaje.";

cout << endl;
cout << endl;
cout << "El puntaje de un lanzamiento esta determinado por una serie de reglas que figuran en la seccion Combinaciones ganadoras.";
cout << endl;

cout << "El puntaje final de la ronda sera el valor maximo obtenido entre los 3 lanzamientos, con las siguientes excepciones:";
cout <<"Si en un lanzamiento se obtiene escalera el jugador GANA EL PARTIDO en ese momento ";
cout <<"Si en un lanzamiento se obtiene una combinacion de 6 dados con valor 6, el puntaje de la ronda entera sera 0.";

    rlutil::anykey();
}

#endif // REGLAS_H_INCLUDED
