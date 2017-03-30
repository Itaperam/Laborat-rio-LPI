#include <iostream>
#include "Televisao.h"

int main() {

    Televisao *tv = new Televisao();
    Televisao *tv2 = new Televisao();

    tv->aumentarCanal();
    tv->aumentarVolume();

    std::cout << "TV - Canal: " << tv->getCanal() << " Volume: "<< tv->getVolume() << std::endl;

    tv2->setCanal(25);

    std::cout << "TV 2 - canal: " << tv2->getCanal()<< " Volume: "<< tv->getVolume() << std::endl;


    return 0;
}