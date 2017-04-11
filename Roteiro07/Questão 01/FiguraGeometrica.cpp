//
// Created by italo on 06/04/17.
//
#include <string>
#include "FiguraGeometrica.h"

string FiguraGeometrica::getNome() {
    return this->nome;
}

void FiguraGeometrica::setNome(string nome) {
    this->nome = nome;
}

float FiguraGeometrica::calcularArea( float a, float b){
    return  a * b;
}


