#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "user.h"
#include <string>
#include <vector>

using namespace std;

class account
{
public:
    account();

private:
    string account_name, password;
    bool active;
    int code_of_user;

public:
};

#endif // ACCOUNT_H
