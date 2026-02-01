#include "luottotili.h"
#include <iostream>

using namespace std;

luottotili::luottotili(string omistaja,double raja) : pankkitili(omistaja),luottoRaja(raja) {

    //cout << "Luottotili konstruktori " << endl;
    cout << "Pankkitili luotu " << omistaja <<"lle" << endl;
    cout << "Luottotili luotu " << omistaja <<"lle" << endl;
    //cout << "luottoraja kayttajalle on maaritetty : " << luottoRaja << endl;
}


bool luottotili::deposit(double raha) {
    if (raha <= 0) {
        return false; }

        saldo += raha;

    if (saldo > 0) {
            saldo = 0; }

        return true;
}

bool luottotili::withdraw(double raha) {
    if (raha <= 0) {
        return false; }

    if (saldo - raha < -luottoRaja) {
        return false; }

    saldo -= raha;
        return true;
}
