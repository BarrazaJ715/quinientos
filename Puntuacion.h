#ifndef PUNTUACION_H_INCLUDED
#define PUNTUACION_H_INCLUDED

void CargarVector(int *NumeroDado){

   for(int x=0; x<6; x++){
    rlutil::locate(48+ x + 2 , 10);
  NumeroDado[x]= 1 + rand()%6;

  // lugar para poner los dados dibujados dependiendo su numero en la vuelta

 rlutil::locate(50+ x + 2 , 11);
 cout<< NumeroDado[x];
   }
}
int SumarVector(int *NumeroDado){
 int Total=0;
for (int i=0; i<6; i++){
Total+=NumeroDado[i];
}
return Total;
}
int MultiplicarPorDiez(int *NumeroDado){
int ContIguales=1, ContMayor=0, Pos=0, ResultadoPos=0;

for (int i=0; i<6; i++){
ContIguales=1;
for (int j=i+1; j<=6; j++){
   if(NumeroDado[i]==NumeroDado[j]){
    ContIguales++;
            }
     }
     if (ContIguales>ContMayor){
ContMayor=ContIguales;
    Pos=NumeroDado[i];
        }
  }
  if (ContMayor>2&&ContMayor<=5){
    ResultadoPos = Pos*10;
        }

return ResultadoPos;
}
int MultiplicarPorCincuenta(int *NumeroDado){
int ContIguales=0, Pos=0, ResultadoPos=0;

for (int i=1; i<6; i++){

    if(NumeroDado[0]==NumeroDado[i]){
    ContIguales++;
            }
    if(NumeroDado[i]>Pos){
    Pos=NumeroDado[i];
            }
    }
    if(ContIguales==5){
    ResultadoPos=Pos*50;
            }
    return ResultadoPos;
}
bool SeisIguales(int *NumeroDado){
int ContIguales=0, Pos=0;
bool Seis=false;

for (int i=1; i<6; i++){

    if(NumeroDado[0]==NumeroDado[i]){
    ContIguales++;
    Pos=NumeroDado[0];
            }
    }
    if(Pos==6 && ContIguales==5){
            Seis=true;
            }
    return Seis;
}
bool Escalera(int *NumeroDado){
    int ContIguales=0, ContMayor=0, Pos=0, ResultadoPos=0;
    bool Win=false;
for (int i=0; i<6; i++){
for (int j=i+1; j<=6; j++){
   if(NumeroDado[i]==NumeroDado[j]){
    ContIguales++;
            }
     }
  }
  if (ContIguales==0){
    Win=true;
  }
/// el codigo comentado me ordena la escalera
/*int ContConsecutivos=0;
bool Win=false;

for (int i=1; i<=6; i++){

    if(NumeroDado[i-1]==i){
            ContConsecutivos++;
    }
}
    if(ContConsecutivos==6){
            Win=true;
    }
    if (NumeroDado[i-1]==i])
        */
    return Win;
}
#endif // PUNTUACION_H_INCLUDED
