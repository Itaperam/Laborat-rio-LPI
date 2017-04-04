#include <iostream>

#include "RestauranteCaseiro.h"

using  namespace std;

int main() {

    RestauranteCaseiro meuRestaurante;

    meuRestaurante.adcionaAoPedidoDaMesa(1,1,3,"pao", 2);
    meuRestaurante.adcionaAoPedidoDaMesa(2,1,3,"pao", 5);
    meuRestaurante.adcionaAoPedidoDaMesa(1,1,1,"pizza", 10);


    float totalPedidos = meuRestaurante.calculaTotalRestaurante();

    cout.precision(2);
    cout << fixed << "Total do dia: " << totalPedidos << endl;

    return 0;
}