//
// Created by Markus.KREMSER on 07.03.2022.
//

#ifndef KLASSEN_FUNKTIONEN_MYCAR_H
#define KLASSEN_FUNKTIONEN_MYCAR_H

#include <iostream>
using namespace std;


class MyCar{
private:
    string marke;
    int position;
    double geschwindigkeit;
    double hkmh;
    int ziel;
    int accelarate;
    int zeit;
public:
    void setInfos(string marke, int position,double geschwindigkeit, double hkmh, int ziel, int accelarate);
    void setaccelarate(int accelarate, double hmkh, double geschwindigkeit);
    void setRestweg(double geschwindigkeit, int position, int zeit);
    void getInfos();
    double getaccelarate();
    int getRestweg();
};

#endif //KLASSEN_FUNKTIONEN_MYCAR_H
