//
// Created by italo on 11/04/17.
//

#include "Medico.h"

void Medico::setNome(string nome) {
    this->nome = nome;
}

void Medico::setAltura(float altura) {
    this->altura = altura;
}

void Medico::setPeso(float peso) {
    this->peso = peso;
}

string Medico::getNome() {
    return this->nome;
}

float Medico::getAltura() {
    return this->altura;
}

float Medico::getPeso() {
    return this->peso;
}
