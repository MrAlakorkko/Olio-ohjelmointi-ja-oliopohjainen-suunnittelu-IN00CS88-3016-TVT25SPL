#ifndef SON_H
#define SON_H
#include <string>
#include "perintaharjoitus.h"

using namespace std;

class Son : public perintaharjoitus
{
public:
    Son(string, string);
    ~Son();
    virtual void printEducation() override;

private:
    string sonName;
};

#endif // SON_H
