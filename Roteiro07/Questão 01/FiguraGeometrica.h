//
// Created by italo on 06/04/17.
//

#ifndef QUESTAO01_7_FIGURAGEOMETRICA_H
#define QUESTAO01_7_FIGURAGEOMETRICA_H

#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica {

protected:
    string nome;
public:
    string getNome();
    void setNome(string nome);
    float calcularArea(float a, float b);

};


#endif //QUESTAO01_7_FIGURAGEOMETRICA_H
