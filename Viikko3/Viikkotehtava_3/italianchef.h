#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string,int,int);
private:
    string password;
    int makepizza(int,int);
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
