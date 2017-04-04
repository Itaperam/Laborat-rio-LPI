//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO03_MESADERESTAURANTE_H
#define QUESTAO03_MESADERESTAURANTE_H

#include <vector>
#include "Pedido.h"

class MesaDeRestaurante {

private:

public:

    vector <Pedido> pedidosDaMesa;
    int numeroDaMesa = 0;

    MesaDeRestaurante();
    ~MesaDeRestaurante();

    void adcionaAoPedido(int n, int qtd, string desc, float p);
    void zeraPedidos();
    float calculaTotal();

};


#endif //QUESTAO03_MESADERESTAURANTE_H
