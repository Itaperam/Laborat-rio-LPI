//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO03_10_HORISTA_H
#define QUESTAO03_10_HORISTA_H


#include "Funcionario.h"

class Horista: public Funcionario {

private:
    double salarioPorHora;
    double horasTrabalhadas;

public:
    Horista();
    void setHorastrabalhadas(double horas);
    double calcularSalario();




};


#endif //QUESTAO03_10_HORISTA_H
