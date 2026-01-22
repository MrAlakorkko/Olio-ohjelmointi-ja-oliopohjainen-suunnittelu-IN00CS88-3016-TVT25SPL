#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    chef chef("Gordon");
    chef.makeSalad(15);
    chef.makeSoup(21);
    ItalianChef ItalianChef("Mario");
    ItalianChef.askSecret("pizza",88,92);
    return 0;
}
