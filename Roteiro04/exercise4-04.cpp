#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void exibeJogadores(int[]);

int jogadores[23];
int count = 0;

int main()
{
   int num = -1;

   while(num != 0){
       cout << "Informe seu voto: ";
       cin << num;

       switch (num) {
           case 1:
               ++count;
               jogadores[0]++;
           break;
           case 2:
              ++count;
              jogadores[1]++;
           break;
           case 3:
               ++count;
               jogadores[2]++;
           break;
           case 4:
               ++count;
               jogadores[3]++;
           break;
           case 5:
               ++count;
               jogadores[4]++;
           break;
           case 6:
               ++count;
               jogadores[5]++;
           break;
           case 7:
               ++count;
               jogadores[6]++;
           break;
           case 8:
               ++count;
               jogadores[7]++;
           break;
           case 9:
               ++count;
               jogadores[8]++;
           break;
           case 10:
               ++count;
               jogadores[9]++;
           break;
           case 11:
               ++count;
               jogadores[10]++;
           break;
           case 12:
               ++count;
               jogadores[11]++;
           break;
           case 13:
               ++count;
               jogadores[12]++;
           break;
           case 14:
               ++count;
               jogadores[13]++;
           break;
           case 15:
               ++count;
               jogadores[14]++;
           break;
           case 16:
               ++count;
               jogadores[15]++;
           break;
           case 17:
               ++count;
               jogadores[16]++;
           break;
           case 18:
               ++count;
               jogadores[17]++;
           break;
           case 19:
               ++count;
               jogadores[18]++;
           break;
           case 20:
               ++count;
               jogadores[19]++;
           break;
           case 21:
               ++count;
               jogadores[20]++;
           break;
           case 22:
               ++count;
               jogadores[21]++;
           break;
           case 23:
               ++count;
               jogadores[22]++;
           break;
           default:
               cout << "Número inválido!" << endl;
           break;
       }

   }
   cout << "\nTotal de votos: \n" << count;
   exibeJogadores(jogadores);
    return 0;
}

void exibeJogadores(int jogadores[]){
    double porcentagem;
    cout << "=======================" << endl;
    for(int i = 0; i < 23; ++i){
        if(jogadores[i] != 0){
            porcentagem = (jogadores[i]*100)/count;
            cout << "Jogador:   Votos:    %.2lf \% \n" << i+1 << jogadores[i] << porcentagem;
        }
    }
    cout << "Demais: 0 Votos" << endl;
}
