#include "perintaharjoitus.h"
#include <iostream>


perintaharjoitus::perintaharjoitus(string s) {
    perintaharjoitusName = s;
    cout<<"perintaharjoitus = " << perintaharjoitusName << " created" << endl;
}
perintaharjoitus::~perintaharjoitus() {
    cout << "perintaharjoitus = " << perintaharjoitusName << " deleted"<<endl;
}

void perintaharjoitus::printperintaharjoitusName() {
    cout<<"Isan nimi= "<< perintaharjoitusName <<endl;
    cout <<"Isan lempinimi : " << perintaharjoitusNickName<<endl;
}
void perintaharjoitus::printEducation() {
    cout<<"Isan koulutus = Puuseppa"<<endl;
}
