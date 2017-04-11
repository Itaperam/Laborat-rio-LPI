//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO03_RESTAURANTECASEIRO_H
#define QUESTAO03_RESTAURANTECASEIRO_H


#include "MesaDeRestaurante.h"

class RestauranteCaseiro {

private:
    vector <MesaDeRestaurante> mesasDoRestaurante; // Vetor de mesas


public:

//    RestauranteCaseiro();
//    ~RestauranteCaseiro();
    void adcionaAoPedidoDaMesa(int nroMesa, int n, int qtd, string desc, float p);
    float calculaTotalRestaurante();
    void zerarRestaurante();

};


#endif //QUESTAO03_RESTAURANTECASEIRO_H
