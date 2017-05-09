//
// Created by italo on 09/05/17.
//

#include "Horista.h"

Horista::Horista() {
    salarioPorHora = 1000;
    horasTrabalhadas = 0;

}

void Horista::setHorastrabalhadas(double horas) {

    horasTrabalhadas = horas;
}

double Horista::calcularSalario() {

    double horasExtra = horasTrabalhadas - 40;

    return  salarioPorHora + ((salarioPorHora/30) * horasExtra);
}




