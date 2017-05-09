#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main() {

    Conta minhaConta("Italo", 100, 1, 0);
    ContaEspecial minhaContaEspecial("Lais", 200, 2, 0);


    minhaConta.depositar(20);
    minhaConta.sacar(30);
    minhaConta.definirLimite();

    minhaContaEspecial.sacar(10);
    minhaContaEspecial.depositar(20);
    minhaContaEspecial.definirLimite();

    cout.precision(2);
    cout <<fixed << "Nome: " << minhaConta.getNome() << endl;
    cout << "Nº Conta: " << minhaConta.getNumeroConta() << endl;
    cout << "Salário: " << minhaConta.getSalario() << endl;
    cout << "Saldo: " << minhaConta.getSaldo() << endl;
    cout << "Limite: " << minhaConta.getLimite() << endl;

//    cout << endl;
//    cout << endl;
//
//    cout.precision(2);
//    cout <<fixed << "Nome: " << minhaContaEspecial.getNome() << endl;
//    cout << "Nº Conta: " << minhaContaEspecial.getNumeroConta() << endl;
//    cout << "Salário: " << minhaContaEspecial.getSalario() << endl;
//    cout << "Saldo: " << minhaContaEspecial.getSaldo() << endl;
//    cout << "Limite: " << minhaContaEspecial.getLimite() << endl;

    return 0;
}