#ifndef AUTHENTICATOR_H
#define AUTHENTICATOR_H
#include<string>
#include "db.h"
#include "windowselector.h"

class Authenticator
{
private:
    std::string username;
    std::string password;
public:
    Authenticator();
    Authenticator(std::string username, std::string password);
    void setUsername(std::string name);
    void setPassword(std::string pass);
    WindowSelector * checkValidty(Person ** p);
};

#endif // AUTHENTICATOR_H
