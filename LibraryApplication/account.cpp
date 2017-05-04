#include "account.h"

account::account() {

}

int account::existAccountName(string account_name) {
    ifstream fi;
    fi.open("storage/LIST_ACCOUNT.txt");
    if (! fi.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    string line, name;
    stringstream stream;
    getline(fi, line);
    stream.str(line); stream >> n;
    for (int i = 0; i < n; ++i) {
        getline(fi, line);
        stream.clear(); stream.str(line);
        stream >> name;
        if (name == account_name) return TRUE;
    }
    return FALSE;
}

int account::signInAccount(string account_name, string password) {
    ifstream fi;
    fi.open("storage/LIST_ACCOUNT.txt");
    if (! fi.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    string line, name, pass; int state = 0;
    stringstream stream;
    getline(fi, line);
    stream.str(line); stream >> n;
    for (int i = 0; i < n; ++i) {
        getline(fi, line);
        stream.clear(); stream.str(line);
        stream >> name >> pass >> state;
        if (name == account_name) {
            if (pass == password) {
                if (state == 1) return TRUE;
                return LOCKED_ACCOUNT;
            }
            return WRONG_PASSWORD;
        }
    }
    return NOT_EXIST;
}
