#include <iostream>
#include "Data.cpp"

using namespace std;

class DataTest{

};

int main()
{
    Data myData;
    Data otherData;

    myData.setDia(2);
    myData.setMes(10);
    myData.setAno(1991);

    otherData.setDia(3);
    otherData.setMes(10);
    otherData.setAno(2009);

    cout << "Data: "
         << myData.getDia() << "/"
         << myData.getMes() << "/"
         << myData.getAno() <<  endl;

    cout << "Other Data: "
         << otherData.getDia() << "/"
         << otherData.getMes() << "/"
         << otherData.getAno() <<  endl;

    return 0;
}
