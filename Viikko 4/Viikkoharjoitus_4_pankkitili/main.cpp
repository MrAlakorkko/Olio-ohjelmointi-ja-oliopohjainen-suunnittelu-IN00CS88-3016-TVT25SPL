#include <iostream>
using namespace std;
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
int main()
{
    cout <<"Luodaan tilit:" << endl;
    Asiakas Romeo("Romeo",1500);
    Asiakas Julia("Julia",2500);

    cout <<"Alkusaldot:" << endl;
    Romeo.showSaldo();
    Julia.showSaldo();

    cout <<"Talletustesti.. ->" << endl;
    Romeo.talletus(1000);
    Julia.talletus(100);

    Romeo.showSaldo();
    Julia.showSaldo();
    cout<<"Romeo tilisiirto Julialle 500->" << endl;

    Romeo.tiliSiirto(500,Julia);

    Romeo.showSaldo();
    Julia.showSaldo();
    cout<<"Testataan luotonnostamiset" << endl;
    Romeo.luotonNosto(1400);
    Julia.luotonNosto(2500);

    cout << "vilkaistaan statukset" << endl;
    Romeo.showSaldo();
    Julia.showSaldo();

    cout << "maksetaan molempien luottovelat pois" << endl;
    Romeo.luotonMaksu(1600); //tahallaan enemmän jotta
    //varmistuu että Romeon velka menee 0 eikä esim. +200
    Julia.luotonMaksu(2500);

    cout << "Viimeinen status" << endl;
    Romeo.showSaldo();
    Julia.showSaldo();
    return 0;
}
