#include "seuraaja.h"
#include <iostream>
#include <string>

using namespace std;

Seuraaja::Seuraaja(string nimi)
{
    this->nimi = nimi;
    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}
void Seuraaja::paivitys(string teksti) {
    cout << "Seuraaja " << nimi << " sai viestin" << endl;
}
