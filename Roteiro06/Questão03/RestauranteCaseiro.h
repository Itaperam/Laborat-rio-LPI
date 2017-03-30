//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO03_RESTAURANTECASEIRO_H
#define QUESTAO03_RESTAURANTECASEIRO_H


#include "MesaDeRestaurante.h"

class RestauranteCaseiro {

private:

public:
    MesaDeRestaurante *mesa[];
    RestauranteCaseiro(int m);
    ~RestauranteCaseiro();

};


#endif //QUESTAO03_RESTAURANTECASEIRO_H
