//
// Created by italo on 08/05/17.
//
#include <iostream>
#include "ValorAbaixoException.h"

using namespace std;

void ValorAbaixoException::mensagem() {
    cout << "Exceção 01 - ";
    cout << "Valor menor ou igual a 0 " << endl;
}
