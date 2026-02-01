#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
#include <string>
using namespace std;

class luottotili : public pankkitili
{
public:
    explicit luottotili(string omistaja,double luottoRaja);
    bool deposit(double raha) override;
    bool withdraw(double raha) override;
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
