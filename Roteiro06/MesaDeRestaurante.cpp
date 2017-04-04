//
// Created by italo on 30/03/17.
//

#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante() {

}

MesaDeRestaurante::~MesaDeRestaurante() {

}

void MesaDeRestaurante::adcionaAoPedido(int n, int qtd, string desc, float p) {

    Pedido pedido;

    pedido.setNumero(n);
    pedido.setQuantidade(qtd);
    pedido.setDescricao(desc);
    pedido.setPreco(p);

    pedidosDaMesa.push_back(pedido);
}

void MesaDeRestaurante::zeraPedidos() {

    pedidosDaMesa.clear();
}

float MesaDeRestaurante::calculaTotal() {
    float total = 0;

    for(int i = 0; i < pedidosDaMesa.size(); i++){

            total = total +  pedidosDaMesa[i].getPreco() * pedidosDaMesa[i].getQuantidade();

    }
    return total;
}


