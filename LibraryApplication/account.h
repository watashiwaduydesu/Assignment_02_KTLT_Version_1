#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "marco.h"
#include "library.h"

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
    static int existAccountName(string account_name);
//    void readData();
//    void getData();
};

#endif // ACCOUNT_H
