//
// Created by italo on 08/05/17.
//

#ifndef QUESTAO02_10_ICONTA_H
#define QUESTAO02_10_ICONTA_H


class IConta {

public:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;

};


#endif //QUESTAO02_10_ICONTA_H
