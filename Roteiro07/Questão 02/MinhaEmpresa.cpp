#include <iostream>
#include "Consultor.h"

int main() {
    Funcionario f;
    Consultor c;

    //Funcionário
    f.setSalario(1000);
    //Consultor
    c.setSalario(1000);

    //Get do salario de funcionário
    cout << f.getSalario() << endl;

    //Get do salario de consulsor +10%
    cout << c.getSalario() << endl;

    //Get do salario com % informada
    cout << c.getSalario(20) << endl;
    return 0;
}