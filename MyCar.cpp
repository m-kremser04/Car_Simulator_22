//
// Created by Markus.KREMSER on 07.03.2022.
//

#include "MyCar.h"


void MyCar::setInfos(string marke, int position,double geschwindigkeit, double hkmh, int ziel, int accelarate)
{
    
    this->marke = marke;
    this->position = position;
    this->geschwindigkeit = geschwindigkeit;
    this->hkmh = hkmh;
    this->ziel = ziel;
    this->accelarate = accelarate;
}

void MyCar::getInfos()
{
    cout << "Das Auto " << marke << " fährt mit " << geschwindigkeit << " km/h zum noch " << getRestweg() << " m entfernten Ziel" << endl;
}

void MyCar::setRestweg(double geschwindigkeit, int position, int zeit)
{
        this->position = (this->geschwindigkeit / 3.6) * zeit;
}

int MyCar::getRestweg()
{
    return this->ziel-this->position;
}

void MyCar::setaccelarate(int accelarate, double hmkh, double geschwindigkeit)
{
    if (this->geschwindigkeit <= this->hkmh)
    {
        this->geschwindigkeit += this->accelarate;
    }
}

double MyCar::getaccelarate()
{
    return this->geschwindigkeit;
}






