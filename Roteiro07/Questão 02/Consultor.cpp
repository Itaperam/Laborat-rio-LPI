//
// Created by italo on 11/04/17.
//

#include "Consultor.h"

float Consultor::getSalario() {
    return Funcionario::getSalario() + ((Funcionario::getSalario() * 10) / 100) ;
}

float Consultor::getSalario(float percent) {
    return Funcionario::getSalario() + ((Funcionario::getSalario() * percent)/100);
}
