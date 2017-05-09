//
// Created by italo on 08/05/17.
//

#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"


void TestaValidaNumero::validaNumero(int num) {

    try {

        if(num <= 0){
            throw (ValorAbaixoException());
        }
        if(num > 100 && num < 1000){
            throw (ValorAcimaException());
        }
        if(num >= 1000){
            throw (ValorMuitoAcimaException());
        }
    }
    catch (ValorAbaixoException e){
        e.mensagem();
    }
    catch (ValorAcimaException e){
        e.mensagem();
    }
    catch (ValorMuitoAcimaException e){
        e.mensagem();
    }
}
