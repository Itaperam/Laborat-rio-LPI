//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO02_10_CONTAESPECIAL_H
#define QUESTAO02_10_CONTAESPECIAL_H


#include "Conta.h"

class ContaEspecial: public Conta {

public:
    ContaEspecial(const string &nome, double salario, int numero, double saldo);

    void definirLimite();


};


#endif //QUESTAO02_10_CONTAESPECIAL_H
