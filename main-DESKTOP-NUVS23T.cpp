
#include "MyCar.h"
using namespace std;

int main()
{
    MyCar *car = new MyCar;
    car->setInfos("Audi", 0, 100, 200, 10000, 5);
    car->getInfos();

    return 0;
}