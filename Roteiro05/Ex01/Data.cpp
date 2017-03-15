#include <iostream>
#include <string>

using namespace std;

class Data
{
public:
    int dia;
    int mes;
    int ano;

public:
    Data(){
        dia = 0;
        mes = 0;
        ano = 0;
    }

    void setDia(int d){
        dia = d;
    }
    int getDia(){
        return dia;
    }

    void setMes(int m){
        mes = m;
    }
    int getMes(){
        return mes;
    }

    void setAno(int a){
        ano = a;
    }
    int getAno(){
        return ano;
    }

    void avancarDia(){
        if(dia < 31 && mes < 12){
            dia++;
        }
        if(dia == 31 && mes < 12){
            dia = 1;
            mes++;
        }
        if(dia == 31 && mes == 12){
            dia = 1;
            mes = 1;
            ano++;
        }
    }

};

// int main()
// {
//     Data myData;
//     return 0;
// }
