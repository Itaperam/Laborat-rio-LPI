#include <iostream>

using namespace std;

int main()
{
    int face = -1;
    int qtdLancamentos = 0;
    double pcnt1 = 0;
    double pcnt2 = 0;
    double pcnt3 = 0;
    double pcnt4 = 0;
    double pcnt5 = 0;
    double pcnt6 = 0;
    int face1 = 0;
    int face2 = 0;
    int face3 = 0;
    int face4 = 0;
    int face5 = 0;
    int face6 = 0;

    while (face != 0) {
        cout << "Informe a face: ";
        cin >> face;

        switch (face) {
            case 1:
                  face1++;
                  qtdLancamentos++;
            break;
            case 2:
                  face2++;
                  qtdLancamentos++;
            break;
            case 3:
                  face3++;
                  qtdLancamentos++;
            break;
            case 4:
                  face4++;
                  qtdLancamentos++;
            break;
            case 5:
                  face5++;
                  qtdLancamentos++;
            break;
            case 6:
                  face6++;
                  qtdLancamentos++;
            break;
            default:
                  cout << "Valor inválido" << endl;
        }
         pcnt1 = (face1*100)/qtdLancamentos;
         pcnt2 = (face2*100)/qtdLancamentos;
         pcnt3 = (face3*100)/qtdLancamentos;
         pcnt4 = (face4*100)/qtdLancamentos;
         pcnt5 = (face5*100)/qtdLancamentos;
         pcnt6 = (face6*100)/qtdLancamentos;
    }

    cout << "Face 1: " << face1 << " = % " << pcnt1 << endl;
    cout << "Face 2: " << face2 << " = % " << pcnt2 << endl;
    cout << "Face 3: " << face3 << " = % " << pcnt3 << endl;
    cout << "Face 4: " << face4 << " = % " << pcnt4 << endl;
    cout << "Face 5: " << face5 << " = % " << pcnt5 << endl;
    cout << "Face 6: " << face6 << " = % " << pcnt6 << endl;
    cout << "Lançamentos: " << qtdLancamentos << endl;


    return 0;
}
