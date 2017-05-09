#include "external.h"

vector<account> l_account, l_account_require;
vector<admin> l_admin, l_admin_require;
vector<librarian> l_lib, l_lib_require;
vector<user> l_user, l_user_require;
vector<book> l_book;
vector<user_book> l_user_book, l_user_require_book;

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
