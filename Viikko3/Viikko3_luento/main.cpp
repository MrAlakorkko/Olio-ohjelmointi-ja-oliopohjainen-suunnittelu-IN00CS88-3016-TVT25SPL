#include <iostream>
#include "perintaharjoitus.h"
#include "son.h"

using namespace std;

int main()
{
    //perintaharjoitus isa("Teppo");
    Son poika("Teppo","Matti");
    poika.printperintaharjoitusName();
    poika.printEducation();
    poika.perintaharjoitus::printEducation();
    return 0;
}
