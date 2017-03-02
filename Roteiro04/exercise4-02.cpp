#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int num = 0;
    int palpite = 0;

    srand(time(NULL));
    num = rand() % 100;

    while (palpite != num) {

        cout << "Tente adivinhar! ";
        cin >> palpite;

        if(palpite > num){
            cout << "Muito alto, tente novamente !" << endl;
        }
        if(palpite < num){
            cout << "Muito baixo, tente novamente !" << endl;
        }
        if (palpite == num) {
            cout << "Parabéns você acertou!" << endl;
        }
    }
    
    cout << "Numero sorteado: " << num << endl;
    return 0;
}
