#include "external.h"

vector<account> l_account, l_account_require;
vector<admin> l_admin, l_admin_require;
vector<librarian> l_lib, l_lib_require;
vector<user> l_user, l_user_require;
vector<book> l_book;
vector<user_book> l_user_book, l_user_require_book;

int ID_account = 0, ID_book = 0;

int hashPassword(string password) {
    long long value = 0ll, MOD = 1000000009ll;
    for (int i = 0; i < (int) password.size(); ++i) {
        value = (value * 307 + password[i]) % MOD;
    }
    return (int) value;
}

bool checkPassword(string password, int value) {
    return (hashPassword(password) == value);
}

string allocateIDAccount() {
    ++ID_account;
    stringstream ss;
    ss << "IDA" << setw(7) << setfill('0') << ID_account;
    return ss.str();
}

string allocateIDBook() {
    ++ID_book;
    stringstream ss;
    ss << "IDB" << setw(7) << setfill('0') << ID_book;
    return ss.str();
}
