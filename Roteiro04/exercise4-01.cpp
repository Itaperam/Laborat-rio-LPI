#include <iostream>

using namespace std;

int main()
{
    int maior = 0;
    int num;

    while (num != 0) {
        cout << "Informe um número: ";
        cin >> num;

        if(num > maior){
            maior = num;
        }
    }

    cout << "O maior é: " << maior << endl;

    return 0;
}
