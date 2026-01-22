#include "chef.h"
#include <iostream>
#include <string.h>

using namespace std;


chef::chef(string s) { // mainissa chef chefName()
    chefName = s;
    cout << "DEBUG / Chef Constructed" << endl;
    cout << "Kokin nimi on " << chefName << endl;

}

chef::~chef() {
    cout << "Chef Deconstructor" << endl;
}

chef::makeSalad(int annos) {
    int salaatti = annos / 5;
    cout << "Chef " << /*chefname*/ "can make "
         << salaatti << " salad portions" << endl;
    return salaatti;
}

chef::makeSoup(int annos2) {
    int keitto = annos2 / 3;
    cout << "Chef " << /*chefname*/ "can make "
         << keitto << " soup portions" << endl;
    return keitto;
}
