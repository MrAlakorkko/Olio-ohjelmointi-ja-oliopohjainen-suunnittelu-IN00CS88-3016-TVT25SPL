#include "pankkitili.h"
#include <iostream>
#include <string>
using namespace std;

pankkitili::pankkitili(string omistaja) {
    this->omistaja = omistaja;
    //cout << "Debug / Pankkitili contructed " << endl;
    //cout <<"Pankkitili luotu " << omistaja << "lle" << endl;
}

double pankkitili::getBalance() {

    return saldo;

}

bool pankkitili::deposit(double raha) {
    if (raha <= 0)
        return false;
    saldo += raha;
    //cout << "Debug Deposit : " << saldo << endl;
    //cout << "Talletuksen jalkeen tililla on : " << saldo << endl;
    return true;
}
bool pankkitili::withdraw(double raha) {
    if (raha <= 0 || raha > saldo)
        return false;
    saldo -= raha;
    //cout << "Debug withdraw : " << raha << endl;
    //cout << "Kateisnoston jalkeen tililla on : " << saldo << endl;
    return true;
}

