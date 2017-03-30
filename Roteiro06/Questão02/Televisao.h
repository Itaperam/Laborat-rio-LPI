//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO02_PEDIDO_H
#define QUESTAO02_PEDIDO_H


class Televisao {

private:
    int volume;
    int canal;

public:
    Televisao();
    ~Televisao();
    void aumentarVolume();
    void diminuirVolume();
    int getVolume();
    int getCanal();
    void aumentarCanal();
    void diminuirCanal();
    void setCanal(int c);
};
#endif //QUESTAO02_PEDIDO_H
