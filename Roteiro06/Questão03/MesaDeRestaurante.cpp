//
// Created by italo on 30/03/17.
//

#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante() {

}

MesaDeRestaurante::~MesaDeRestaurante() {

}

void MesaDeRestaurante::adcionaAoPedido(int i) {
    pedidos[i]->setNumero(1);
    pedidos[i]->setDescricao("Descrição");
    pedidos[i]->setQuantidade(1);
    pedidos[i]->setPreco(10);
}

void MesaDeRestaurante::zeraPedidos() {
    for(int i = 0; i < pedidos[].length(); i++){
        pedidos[i]->setQuantidade(0);
    }

}

float MesaDeRestaurante::calculaTotal() {
    float total = 0;

    for(int i = 0; i < pedidos[].length(); i++){
       total = total +  pedidos[i]->getPreco() * pedidos[i]->getQuantidade();
    }

    return total;
}


