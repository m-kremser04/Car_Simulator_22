//
// Created by Markus.KREMSER on 07.03.2022.
//

#include "MyCar.h"


void MyCar::setInfos(string marke, int position,double geschwindigkeit, double hkmh, int ziel, int accelarate){
    
    this->marke = marke;
    this->position = position;
    this->geschwindigkeit = geschwindigkeit;
    this->hkmh = hkmh;
    this->ziel = ziel;
    this->accelarate = accelarate;


}

void MyCar::getInfos(){
    cout << "Dein Auto von der Marke " << marke << " faehrt mit " << geschwindigkeit << "m/s und mit maximal " << hkmh << " m/s und mit einer Beschleunigung von " << accelarate << " m/s ins " << ziel << "m entfernte ziel von der Position " << position << endl;
}



