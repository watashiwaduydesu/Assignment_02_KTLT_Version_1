#include "account.h"

account::account() : account_name(""), password(0), active(false), code_of_user("") {
}

account::account(string name, int pass, bool act, bool manager, bool librarian, bool reader, string code) {
    account_name = name; password = pass; active = act;
    is_manager = manager; is_librarian = librarian; is_reader = reader;
    if (code == "") code_of_user = creatCode();
    else code_of_user = code;
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
                stream >> this->is_manager >> this->is_librarian >> this->is_reader;
                break;
            }
        }
    }
    fi.close();
}

void account::showInformation() {
    cout << "---------------ACCOUNT------------\n";
    cout << this->account_name << "/" << this->code_of_user << "/" << this->active;
    cout << this->is_manager << this->is_librarian << this->is_reader << endl;
}

string account::creatCode() {
    // CHUA HIEN THUC
    return "ID123456";
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
    string line, name; int pass = 0, state = 0;
    stringstream stream;
    getline(fi, line);
    stream.str(line); stream >> n;
    for (int i = 0; i < n; ++i) {
        getline(fi, line);
        stream.clear(); stream.str(line);
        stream >> name >> pass >> state;
        if (name == account_name) {
            if (hash_password::match(password, pass)) {
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

int account::addAccounts(vector<account> list_account) {
    fstream f;
    f.open("storage/LIST_ACCOUNT.txt", ios::in);
    if (! f.is_open()) return NOT_ACCESS_FILE;

    int n = 0;
    string line, name, code;
    int pass, act, manager, librarian, reader;
    stringstream stream;
    getline(f, line); stream.clear(); stream.str(line);
    stream >> n;
    for (int i=1;i<=n;i++) {
        getline(f, line); stream.clear(); stream.str(line);
        stream >> name >> pass >> act >> code >> manager >> librarian >> reader;
        account t(name, pass, act, manager, librarian, reader, code);
        list_account.push_back(t);
    }
    f.close();

    f.open("storage/LIST_ACCOUNT.txt", ios::out);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    f << list_account.size() << endl;
    for (account t : list_account) {
        f << t.getName() << " " << t.getPassword() << " " << t.isActive() << " " << t.getCode() << " ";
        f << t.isManager() << " " << t.isLibrarian() << " " << t.isReader() << endl;
    }
    f.close();

    return TRUE;
}
