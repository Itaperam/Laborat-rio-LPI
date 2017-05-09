//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO03_10_COMISSIONADO_H
#define QUESTAO03_10_COMISSIONADO_H


#include "Funcionario.h"

class Comissionado: public Funcionario {

private:
    double vendasSemanais;
    double percentualComissao;
    double salarioBase;

public:
    Comissionado();

    void setVendasSemanais(double valor);
    void setPercentualComissao(double valor);
    void setSalarioBase(double valor);

    double getHorastrabalhadas();
    double getPercentualComissao();
    double getSalarioBase();


    double calcularSalario();

};


#endif //QUESTAO03_10_COMISSIONADO_H
