//
// Created by italo on 09/05/17.
//

#ifndef QUESTAO02_10_CONTA_H
#define QUESTAO02_10_CONTA_H

#include "IConta.h"
#include <iostream>
#include <string>

using  namespace std;

class Conta: public IConta {

private:
    string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;

public:
    Conta(string nome, double salario, int numero, double saldo);

    string getNome();
    double getSalario();
    int getNumeroConta();
    double getSaldo();
    double getLimite();

    void setNome(string nome);
    void setSalario(double valor);
    void setNumeroConta(int numero);
    void setSaldo(double valor);
    void setLimite(double valor);

    void definirLimite();
    void sacar(double valor);
    void depositar(double valor);

    ~Conta();

};


#endif //QUESTAO02_10_CONTA_H
