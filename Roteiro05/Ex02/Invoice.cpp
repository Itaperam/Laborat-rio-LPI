#include <iostream>
#include <string>

using namespace std;

class Invoice
{
public:
    int numero;
    string descricao;
    int quantidade;
    double preco;

public:
    Invoice(){
        numero = 0;
        descricao = "Produto";
        quantidade = 0;
        preco = 0;
    }

    void setNumero(int n){
        numero = n;
    }
    int getNumero(){
        return numero;
    }

    void setDescricao(string desc){
        descricao = desc;
    }
    string getDescricao(){
        return descricao;
    }

    void setQuantidade(int q){
        quantidade = q;
    }
    int getQuantidade(){
        return quantidade;
    }

    void setPreco(double p){
        preco = p;
    }
    double getPreco(){
        return preco;
    }

    double getInvoiceAmount(){
        return quantidade * preco;
    }
};

int main(int argc, char const *argv[])
{
    Invoice myInvoice;
    Invoice mySecondInv;

    myInvoice.setNumero(1);
    myInvoice.setDescricao("Produto 1");
    myInvoice.setQuantidade(1);
    myInvoice.setPreco(10);

    mySecondInv.setNumero(2);
    mySecondInv.setDescricao("Produto 2");
    mySecondInv.setQuantidade(2);
    mySecondInv.setPreco(20);

    cout << "Cod Descr. Qtd Preço" << endl;
    cout << myInvoice.getNumero() << " " << myInvoice.getDescricao() << " " << myInvoice.getQuantidade() << " " << myInvoice.getInvoiceAmount() << endl;
    cout << mySecondInv.getNumero() << " " << mySecondInv.getDescricao() << " " << mySecondInv.getQuantidade() << " " << mySecondInv.getInvoiceAmount() << endl;


    return 0;
}
