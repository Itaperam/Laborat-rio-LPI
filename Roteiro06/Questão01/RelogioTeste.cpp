#include <iostream>
#include "Relogio.h"

int main() {

    int i;

    Relogio *meuRelogio = new Relogio();

    meuRelogio->setHorario(0,0,0);

    std::cout <<"Hora: " << meuRelogio->getHora() << ":"
                         << meuRelogio->getMinuto() << ":"
                         << meuRelogio->getSegundo() << std::endl;

    //Teste para verificar a troca de segundos minutos e horas
    while (i < 1000000){
        meuRelogio->avancarHorario();
        i++;

    }
}