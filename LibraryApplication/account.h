#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "marco.h"
#include "library.h"

using namespace std;

class account
{
public:
    account();
    account(string account_name);

private:
    string account_name, password;
    bool active; // true: active, false: disabled
    string code_of_user; // ket noi voi user trong he thong
    bool isManager, isLibrarian, isReader;

public:
    void showInformation();

public:
    // Kiem tra account_name co ton tai trong he thong hien tai
    static int existAccountName(string account_name);
    static int signInAccount(string account_name, string password);
};

#endif // ACCOUNT_H
