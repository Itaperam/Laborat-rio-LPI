//
// Created by italo on 11/04/17.
//

#ifndef QUESTAO02_7_FUNCIONARIO_H
#define QUESTAO02_7_FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;


class Funcionario {

private:
    string matricula;
    string nome;
    float salario;

public:

    void setMatricula(string matricula);
    void setNome(string nome);
    void setSalario(float salario);

    string getMatricula();
    string getNome();
    virtual float getSalario();

};


#endif //QUESTAO02_7_FUNCIONARIO_H
