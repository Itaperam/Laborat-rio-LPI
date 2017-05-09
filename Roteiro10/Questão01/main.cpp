#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main() {

    TestaValidaNumero testeDeValidacao;

    // Testando as Exceções
    testeDeValidacao.validaNumero(0);
    testeDeValidacao.validaNumero(102);
    testeDeValidacao.validaNumero(1000);


    return 0;
}