//
// Created by italo on 09/05/17.
//

#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"


double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula) {

    try {
        for(int i = 0; i < sizeof(funcionario[]); i++){
            if(funcionario->getMatricula() == matricula){
                cout << funcionario->getNome() << endl;
            }
            else{
                throw (FuncionarioNaoExisteException());
            }

        }
    }
    catch (FuncionarioNaoExisteException e) {
        e.mensagem();
    }

    return 0;
}
