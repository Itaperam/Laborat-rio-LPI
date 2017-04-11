#include <iostream>
#include "Cirugiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

int main() {

    Cirugiao cirugiao;
    Oftalmologista oftalmologista;
    Otorrino otorrino;
    Ginecologista ginecologista;

    cirugiao.setNome("Dr. José");
    cirugiao.setAltura(1.85);
    cirugiao.setPeso(90);

    oftalmologista.setNome("Dr. Pedro");
    oftalmologista.setAltura(1.60);
    oftalmologista.setPeso(80);

    otorrino.setNome("Dra. Juliana");
    otorrino.setAltura(1.70);
    otorrino.setPeso(60);

    ginecologista.setNome("Dra. Maria");
    ginecologista.setAltura(1.75);
    ginecologista.setPeso(58);

    return 0;
}