//
// Created by italo on 30/03/17.
//

#include <vector>
#include "RestauranteCaseiro.h"

void RestauranteCaseiro::adcionaAoPedidoDaMesa(int nroMesa, int n, int qtd, string desc, float p){

    MesaDeRestaurante mesa;

    mesa.numeroDaMesa = nroMesa;
    mesa.adcionaAoPedido(n, qtd, desc, p);

    mesasDoRestaurante.push_back(mesa);

}

float RestauranteCaseiro::calculaTotalRestaurante(){

    float total = 0;

    for(int i = 0; i < mesasDoRestaurante.size(); i++){
        total += mesasDoRestaurante[i].calculaTotal();
    }
}

void RestauranteCaseiro::zerarRestaurante(){
    mesasDoRestaurante[0].zeraPedidos();
    mesasDoRestaurante.clear();
}

