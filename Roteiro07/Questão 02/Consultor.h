//
// Created by italo on 11/04/17.
//

#ifndef QUESTAO02_7_CONSULTOR_H
#define QUESTAO02_7_CONSULTOR_H


#include "Funcionario.h"

class Consultor: public Funcionario {

public:
    float getSalario();
    float getSalario(float percent);

};


#endif //QUESTAO02_7_CONSULTOR_H
