//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO03_10_SISTEMAGERENCIAFOLHA_H
#define QUESTAO03_10_SISTEMAGERENCIAFOLHA_H


#include "Funcionario.h"

class SistemaGerenciaFolha {

private:


public:
    Funcionario funcionario[10];
    void setFuncionario(Funcionario f);
    void calculaValorTotalFolha();
    double consultaSalarioFuncionario(int matricula);

};


#endif //QUESTAO03_10_SISTEMAGERENCIAFOLHA_H
