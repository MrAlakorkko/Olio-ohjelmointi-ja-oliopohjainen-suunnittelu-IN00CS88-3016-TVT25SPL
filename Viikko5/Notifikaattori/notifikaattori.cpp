#include "notifikaattori.h"

#include <iostream>

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori luotu" << endl;
}

void Notifikaattori::lisaa(Seuraaja* s) {
    if (seuraajat == nullptr)
    {
        seuraajat=s;
        s->next = nullptr;
        cout << "Notifikaattori lisaa seuraajan " << s->getNimi() << endl;
        return;
    }
        Seuraaja* current = seuraajat;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = s;
        cout << "Notifikaattori lisaa seuraajan " << s->getNimi() << endl;
        s->next = nullptr;

}
void Notifikaattori::poista(Seuraaja* s) {
    if (seuraajat == nullptr) //jos lista tyhjä = ei poistettavaa >
    {
        cout << "Lista tyhja, ei poistettavaa" << endl;
        return;
    }
    if (seuraajat == s)    //Jos halutaan poistaa head
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* previous = seuraajat;
    Seuraaja* current = seuraajat->next;

    while (current != nullptr) //tietyn poistaminen (esimerkkimainissa n.poista(&b / "Pasi")
    {
        if (current == s)
        {
            previous->next = current->next;
            return;
        }
        previous = current;
        current = current->next;
    }
}
void Notifikaattori::tulosta() {
    if (seuraajat == nullptr) {
        cout << "Lista on tyhja" << endl;
        return;
    }
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        cout << current->getNimi() << endl;
        current = current-> next;
    }
}
void Notifikaattori::postita(string viesti) {
    cout <<"Notifikaattori postittaa : " << viesti << endl;
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(viesti);
        current = current->next;
    }

}
