
#include "MyCar.h"
#include <windows.h>
using namespace std;

int main()
{
    MyCar *car1 = new MyCar;
    MyCar *car2 = new MyCar;
    string marke = "Audi";
    int position = 0;
    double geschwindigkeit = 100;
    double hkmh = 280;
    int ziel = 1000;
    int accelarate = 5;
    int zeit = 0;
    bool bool1 = 0;
    string marke2 = "BMW";
    int position2 = 10;
    double geschwindigkeit2 = 80;
    double hkmh2 = 250;
    int accelarate2 = 8;
    bool bool2 = 0;
    int zeit2 = 0;

    car1->setInfos(marke, position, geschwindigkeit, hkmh, ziel, accelarate);
    car1->getInfos();
    car2->setInfos(marke2, position2, geschwindigkeit2, hkmh2, ziel, accelarate2);
    car2->getInfos();

    while(car1->getRestweg() >= 0 || car2->getRestweg() >= 0)
    {
        car1->setaccelarate(accelarate, hkmh, car1->getaccelarate());
        car2->setaccelarate(accelarate2, hkmh2, car2->getaccelarate());
        car1->setRestweg(car1->getaccelarate(), car1->getRestweg(), zeit);
        car2->setRestweg(car2->getaccelarate(), car2->getRestweg(), zeit);
        car1->getInfos();
        car2->getInfos();
        _sleep(1000);
        zeit++;
        if(car1->getRestweg() <= 0)
        {
            cout << "Der " << marke << " hat gewonnen" << endl;
            return 0;
        }
        if(car2->getRestweg() <= 0)
        {
            cout << "Der " << marke2 << " hat gewonnen" << endl;
            cout << "Die Differenz zwischen " << marke << " und " << marke2 << " war: " << zeit-zeit2 << endl;
            return 0;
        }
    }
    return 0;
}