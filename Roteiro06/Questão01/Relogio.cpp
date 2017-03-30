//
// Created by italo on 30/03/17.
//
#include <iostream>
#include "Relogio.h"
//Construtor
Relogio::Relogio() {

}
//Desconstrutor
Relogio::~Relogio() {

}

void Relogio::setHorario(int hora, int minuto, int ssegundo) {
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

int Relogio::getHora() { return this->hora;}
int Relogio::getMinuto() { return this->minuto;}
int Relogio::getSegundo() { return this->segundo;}

void Relogio::avancarHorario() {

    if(this->segundo < 60){
        this->segundo++;
        if(this->segundo == 60){
            this->segundo = 0;
            this->minuto++;
            if(this->minuto == 60){
                this->minuto = 0;
                this->hora++;
                if(this->hora == 24){
                    this->hora = 0;
                    this->minuto = 0;
                    this->segundo = 0;
                }
            }
        }
    }


    std::cout << "Hora: "
              << this->hora << ":"
              << this->minuto << ":"
              << this->segundo << std::endl;
}




