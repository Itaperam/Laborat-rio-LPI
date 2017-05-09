//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO03_10_FUNCIONARIO_H
#define QUESTAO03_10_FUNCIONARIO_H

#include <iostream>

using namespace std;


class Funcionario {
private:
    string nome;
    int matricula;

public:
    string getNome();

    void setNome(string nome);

    int getMatricula();

    void setMatricula(int matricula);

    virtual double calcularSalario();

};


#endif //QUESTAO03_10_FUNCIONARIO_H
