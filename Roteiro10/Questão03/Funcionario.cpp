//
// Created by italo on 09/05/17.
//

#include "Funcionario.h"

string Funcionario::getNome(){
    return nome;
}

void Funcionario::setNome(string nome) {
    Funcionario::nome = nome;
}

int Funcionario::getMatricula() {
    return matricula;
}

void Funcionario::setMatricula(int matricula) {
    Funcionario::matricula = matricula;
}

double Funcionario::calcularSalario() {

}


