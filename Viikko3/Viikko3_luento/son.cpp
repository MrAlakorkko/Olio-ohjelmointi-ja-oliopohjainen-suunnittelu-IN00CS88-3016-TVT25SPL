#include "son.h"
#include <iostream>

Son::Son(string isa, string poika) : perintaharjoitus(isa)
{
    //Isä pitää olla hengissä jo nyt!
    sonName = poika;
    cout<< "Son = "<< sonName << " created"<<endl;
    this->perintaharjoitusNickName = "Fatsi";

}

Son::~Son() {


    cout<<"Son = "<< sonName << " deleted"<<endl;

}

void Son::printEducation() {
    cout<<"Pojan ammatti on : Koodari"<< endl;
}
