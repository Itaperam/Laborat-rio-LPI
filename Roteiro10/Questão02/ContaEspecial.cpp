//
// Created by italo on 09/05/17.
//

#include "ContaEspecial.h"

// Construtor
ContaEspecial::ContaEspecial(const string &nome, double salario, int numero, double saldo) :
        Conta(nome,  salario, numero, saldo) {

}

void ContaEspecial::definirLimite() {
    setLimite(3*getSalario());
}


