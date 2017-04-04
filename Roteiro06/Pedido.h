//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO03_PEDIDO_H
#define QUESTAO03_PEDIDO_H

#include <iostream>
#include <string>

using namespace std;

class Pedido {

private:
    int numero;
    string descricao;
    int quantidade;
    float preco;

public:
    Pedido();
    ~Pedido();

    int getNumero();
    string getDescricao();
    int getQuantidade();
    float getPreco();

    void setNumero(int n);
    void setDescricao(string s);
    void setQuantidade(int q);
    void setPreco(float p);

};


#endif //QUESTAO03_PEDIDO_H
