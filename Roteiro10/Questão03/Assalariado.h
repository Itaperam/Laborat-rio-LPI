//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO03_10_ASSALARIADO_H
#define QUESTAO03_10_ASSALARIADO_H


#include "Funcionario.h"

class Assalariado: public Funcionario {

private:
    double salario;

public:
    Assalariado();
    double calcularSalario();

    double getSalario();

    void setSalario(double salario);

};


#endif //QUESTAO03_10_ASSALARIADO_H
