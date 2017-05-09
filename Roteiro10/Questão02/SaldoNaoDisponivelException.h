//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO02_10_SALDONAODISPONIVELEXCEPTION_H
#define QUESTAO02_10_SALDONAODISPONIVELEXCEPTION_H

#include <iostream>
#include "stdexcept"
#include <math.h>
#include <exception>

using namespace std;

class SaldoNaoDisponivelException: public exception{
public:
    void menssagem();
};


#endif //QUESTAO02_10_SALDONAODISPONIVELEXCEPTION_H
