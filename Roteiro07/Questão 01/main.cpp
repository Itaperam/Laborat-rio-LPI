#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

using  namespace std;

int main() {

    Quadrado q;
    Circulo c;
    Triangulo t;

    q.setNome("Quadrado");
    c.setNome("Círculo");
    t.setNome("Triângulo");

    cout << "Nome " << q.getNome() << " Área: " << q.calcularArea(2,4) << endl;
    cout << "Nome " << c.getNome() << " Área: " << c.calcularArea(2) << endl;
    cout << "Nome " << t.getNome() << " Área: " << t.calcularArea(4,2) << endl;



    return 0;
}