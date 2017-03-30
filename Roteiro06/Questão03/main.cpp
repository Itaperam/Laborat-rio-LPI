#include <iostream>

#include "RestauranteCaseiro.h"

int main() {

    RestauranteCaseiro *meuRestaurante = new RestauranteCaseiro(40);

    meuRestaurante->mesa[0]->adcionaAoPedido(1);

    return 0;
}