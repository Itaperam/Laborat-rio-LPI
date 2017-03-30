//
// Created by italo on 30/03/17.
//

#ifndef QUESTAO01_RELOGIO_H
#define QUESTAO01_RELOGIO_H


class Relogio {

private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio();
    ~Relogio();
    void setHorario(int hora, int minuto, int ssegundo);
    int getHora();
    int getMinuto();
    int getSegundo();
    void avancarHorario();

};

#endif //QUESTAO01_RELOGIO_H
