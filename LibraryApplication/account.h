#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "marco.h"
#include "library.h"
#include "hash_password.h"

using namespace std;

class account
{
public:
    account();
    account(string account_name);
    account(string name, int pass, bool act, bool manager, bool librarian, bool reader, string code = "");

private:
    string account_name;
    int password;
    bool active; // true: active, false: disabled
    string code_of_user; // ket noi voi user trong he thong
    bool is_manager, is_librarian, is_reader;

public:
    string getName() {return account_name;}
    string getCode() {return code_of_user;}
    int getPassword() {return password;}
    bool isActive() {return active;}
    bool isManager() {return is_manager;}
    bool isLibrarian() {return is_librarian;}
    bool isReader() {return is_reader;}
    void showInformation();

public:
    static string creatCode();
    static int existAccountName(string account_name);
    static int signInAccount(string account_name, string password);
    static int addAccounts(vector<account> list_account);
};

#endif // ACCOUNT_H
