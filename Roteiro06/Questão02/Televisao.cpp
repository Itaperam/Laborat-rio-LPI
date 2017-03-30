//
// Created by italo on 30/03/17.
//

#include "Televisao.h"


Televisao::Televisao() {
    this->canal = 0;
    this->volume = 10;
}

Televisao::~Televisao() {

}

void Televisao::aumentarVolume() {
    if(this->volume < 60){
        this->volume++;
    }
}
void Televisao::diminuirVolume() {
    if(this->volume >= 0){
        this->volume--;
    }
}
int Televisao::getVolume() {return this->volume;}
int Televisao::getCanal() {return this->canal;}
void Televisao::aumentarCanal() {
    if(this->canal <= 100){
        this->canal++;
    }
    else{
        this->canal = 0;
    }
}
void Televisao::diminuirCanal() {
    if(this->canal >= 0){
        this->canal--;
    }
    else{
        this->canal = 100;
    }
}
void Televisao::setCanal(int c){this->canal = c;}
