//
// Created by italo on 30/03/17.
//

#include "Pedido.h"

Pedido::Pedido() {

}
Pedido::~Pedido() {

}

int Pedido::getNumero() {
    return this->numero;
}

string Pedido::getDescricao() {
    return this->descricao;
}

int Pedido::getQuantidade() {
    return this->quantidade;
}

float Pedido::getPreco() {
    return this->preco;
}

void Pedido::setNumero(int n) {
    this->numero = n;
}

void Pedido::setDescricao(string s) {
    this->descricao = s;
}

void Pedido::setQuantidade(int q) {
    this->quantidade = q;
}

void Pedido::setPreco(float p) {
    this->preco = p;
}


