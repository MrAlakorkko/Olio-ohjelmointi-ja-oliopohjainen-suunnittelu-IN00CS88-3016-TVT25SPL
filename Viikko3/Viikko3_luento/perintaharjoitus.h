#ifndef PERINTAHARJOITUS_H
#define PERINTAHARJOITUS_H
#include <string>
using namespace std;

class perintaharjoitus
{
public:
    perintaharjoitus(string);
    ~perintaharjoitus();
    void printperintaharjoitusName();
    virtual void printEducation();
private:
    string perintaharjoitusName;

protected:
    string perintaharjoitusNickName;
};



#endif // PERINTAHARJOITUS_H
