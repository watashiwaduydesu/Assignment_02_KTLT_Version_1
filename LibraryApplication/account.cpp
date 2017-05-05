#include "account.h"

account::account() : account_name(""), password(""), active(false), code_of_user("") {

}

account::account(string account_name) : account() {
    ifstream fi;
    fi.open("storage/LIST_ACCOUNT.txt");
    if (fi.is_open()) {
        int n = 0;
        string line, name;
        stringstream stream;
        getline(fi, line);
        stream.str(line); stream >> n;
        for (int i = 0; i < n; ++i) {
            getline(fi, line);
            stream.clear(); stream.str(line);
            stream >> name;
            if (name == account_name) {
                this->account_name = name;
                stream >> this->password >> this->active >> this->code_of_user;
                stream >> this->isManager >> this->isLibrarian >> this->isReader;
                break;
            }
        }
    }
    fi.close();
}

void account::showInformation() {
    cout << "---------------ACCOUNT------------\n";
    cout << this->account_name << "/" << this->code_of_user << "/" << this->active;
    cout << this->isManager << this->isLibrarian << this->isReader << endl;
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
        if (name == account_name) {
            fi.close();
            return TRUE;
        }
    }
    fi.close();
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
                if (state == 1) {fi.close(); return TRUE;}
                fi.close(); return LOCKED_ACCOUNT;
            }
            fi.close();
            return WRONG_PASSWORD;
        }
    }
    fi.close();
    return NOT_EXIST;
}
