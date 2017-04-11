//
// Created by italo on 11/04/17.
//

#ifndef QUESTAO03_7_MEDICO_H
#define QUESTAO03_7_MEDICO_H

#include <iostream>
#include <string>

using  namespace std;

class Medico {

private:
    string nome;
    float altura;
    float peso;

public:
    void setNome(string nome);
    void setAltura(float altura);
    void setPeso(float peso);
    string getNome();
    float getAltura();
    float getPeso();

};


#endif //QUESTAO03_7_MEDICO_H
