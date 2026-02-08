#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("Pertti");
    Seuraaja b("Pasi");
    Seuraaja c("Pena");
    Seuraaja d("Kari");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.lisaa(&d);
    cout << "\nNotifikaattorin seuraajat :" << endl;
    n.tulosta();
    n.postita("Tama on viesti 1");

    n.poista(&b);
    cout << "\ndebug, poistamisen jalkeen seuraajat:\n" << endl;
    n.tulosta();

    n.postita("Tama on viesti 2");
    return 0;
}
