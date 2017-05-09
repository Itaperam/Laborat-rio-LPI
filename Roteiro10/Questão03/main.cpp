#include <iostream>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main() {

    Assalariado assalariado;
    Horista horista;
    Comissionado comissionado;

    horista.setHorastrabalhadas(42);

    comissionado.setPercentualComissao(10);
    comissionado.setVendasSemanais(100);


    cout << "Salário do Assalariado: " << assalariado.calcularSalario() << endl;      // Salário mínimo 1000
    cout << "Salário do Horista: " << horista.calcularSalario() << endl;              //  1000 + 2 horas extras
    cout << "Salário do Comissionado: " << comissionado.calcularSalario() << endl;    // Comissão de 10%


    return 0;
}