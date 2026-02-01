#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string nimi,double luottoRaja) : nimi(nimi),
    Kayttotili(nimi),
    Luottotili(nimi,luottoRaja)
{
    cout << "Asiakkuus " << nimi << " Luotu" << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo() {
    cout << "Asiakkaan " << nimi << " Kayttotilin saldo on : " << Kayttotili.getBalance() << " Euroa" << endl;
    cout << "Asiakkaan " << nimi << " Luottotilin saldo on : " << Luottotili.getBalance() << " Euroa" << endl;

}
bool Asiakas::talletus(double summa) {
    return Kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return Kayttotili.withdraw(summa);
}
bool Asiakas::luotonMaksu(double summa) {
    return Luottotili.deposit(summa);
}
bool Asiakas::luotonNosto(double summa) {
    return Luottotili.withdraw(summa);
}
bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja) {
    if (!Kayttotili.withdraw(summa))
    {
        return false;
    }
        vastaanottaja.Kayttotili.deposit(summa);
        return true;

}
