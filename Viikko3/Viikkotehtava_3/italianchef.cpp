#include "italianchef.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string chefName) : chef(chefName)
{
    cout << "DEBUG / ItalianChef Constructed" << endl;
    cout << "Kokin nimi on " << chefName << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef Deconstructor" << endl;
}

int ItalianChef::makepizza(int a, int b)
{
    int Minpizza = min(a,b) / 5;
    cout << "Chef " << chefName << " with " <<a<<" flour and "
         << b << " water can make " << Minpizza << " pizzas"<< endl;
    return Minpizza;
}

bool ItalianChef::askSecret(string salasana, int jauho, int vesi)
{
    password="pizza";
    if ((salasana.compare(password)) == 0)
         {
            cout << "PASSWORD OK! " << endl;
             makepizza(jauho,vesi);
            return true;
        }
        else
        {
            cout << "WRONG PASSWORD" << endl;
            return false; }

}
