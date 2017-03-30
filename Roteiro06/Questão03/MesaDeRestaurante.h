//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO03_MESADERESTAURANTE_H
#define QUESTAO03_MESADERESTAURANTE_H

#include "Pedido.h"

class MesaDeRestaurante {

private:
    Pedido *pedidos[];

public:
    MesaDeRestaurante();
    ~MesaDeRestaurante();
    void adcionaAoPedido(int i);
    void zeraPedidos();
    float calculaTotal();

};


#endif //QUESTAO03_MESADERESTAURANTE_H
