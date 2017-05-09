//
// Created by italo on 09/05/17.
//

#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

Conta::Conta(string nome, double salario, int numero, double saldo){
   nomeCliente = nome;
   salarioMensal = salario;
   numeroConta = numero;
   saldo = saldo;

   definirLimite();

}

string Conta::getNome() {
    return nomeCliente;
}

double Conta::getSalario() {
    return salarioMensal;
}

int Conta::getNumeroConta() {
    return numeroConta;
}

double Conta::getSaldo() {
    return saldo;
}

double Conta::getLimite() {
    return limite;
}

void Conta::setNome(string nome) {
    nomeCliente = nome;
}

void Conta::setSalario(double valor) {
    salarioMensal = valor;
}

void  Conta::setNumeroConta(int numero) {
    numeroConta = numero;
}

void  Conta::setSaldo(double valor) {
    saldo = valor;
}

void Conta::setLimite(double valor) {
    limite = valor;
}

void Conta::definirLimite() {
    this->limite = salarioMensal*2;

}

void Conta::sacar(double valor) {
    try {

        if(valor > saldo){
            throw (SaldoNaoDisponivelException());
        }
        else{
            saldo -= valor;
        }
    }
    catch (SaldoNaoDisponivelException e){
        e.menssagem();
    }

}

void Conta::depositar(double valor) {
    saldo += valor;
}

Conta::~Conta() {

}







