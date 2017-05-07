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
    bool is_manager, is_librarian, is_reader;

public:
    string getName() {return account_name;}
    string getPassword() {return password;}
    string getCode() {return code_of_user;}
    bool isActive() {return active;}
    bool isManager() {return is_manager;}
    bool isLibrarian() {return is_librarian;}
    bool isReader() {return is_reader;}
    void showInformation();

public:
    // Kiem tra account_name co ton tai trong he thong hien tai
    static int existAccountName(string account_name);
    static int signInAccount(string account_name, string password);
};

#endif // ACCOUNT_H
