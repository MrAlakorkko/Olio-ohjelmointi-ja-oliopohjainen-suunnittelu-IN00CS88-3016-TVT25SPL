#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>
using namespace std;

class chef
{
public:
    chef(string);
    ~chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);

private:

protected:
    string chefName;
};

#endif // CHEF_H
