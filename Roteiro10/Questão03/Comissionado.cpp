//
// Created by italo on 09/05/17.
//

#include "Comissionado.h"

Comissionado::Comissionado(){
    salarioBase = 1000;
}


void Comissionado::setVendasSemanais(double valor) {
    vendasSemanais = valor;
}

void Comissionado::setPercentualComissao(double valor) {
    percentualComissao = valor;
}

void Comissionado::setSalarioBase(double valor) {
    salarioBase = valor;
}

double Comissionado::calcularSalario() {

    return salarioBase + (vendasSemanais * percentualComissao)/100;
}
