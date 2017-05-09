#include "data.h"

int data::loadDataAccount() {
    ifstream f(FILE_ACCOUNT);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    f >> n;
    for (int i = 0; i < n; ++i) {
        account a;
        f >> a.code >> a.name >> a.password >> a.email >> a.id;
        f.get();
        getline(f, a.username);
        f >> a.tel >> a.day >> a.month >> a.year >> a.role;
        l_account.push_back(a);
        if (a.role == ADMIN) l_admin.push_back(admin(a));
        else if (a.role == LIBRARIAN) l_lib.push_back(librarian(a));
        else if (a.role == USER) l_user.push_back(user(a));
        else {
            f.close(); return ERROR;
        }
    }
    f.close();
    return TRUE;
}

int data::storageDataAccount() {
    ofstream f(FILE_ACCOUNT);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    f << l_account.size() << endl;
    for (account a: l_account) {
        f << a.code << endl << a.name << endl << a.password << endl;
        f << a.email << endl << a.id << endl << a.username << endl << a.tel << endl;
        f << a.day << " " << a.month << " " << a.year << endl << a.role << endl;
    }
    f.close();
    return TRUE;
}


int data::loadDataAccountRequire() {
    return TRUE;
}

int data::storageDataAccountRequire() {
    return TRUE;
}

int data::loadDataBook() {
    return TRUE;
}

int data::storageDataBook() {
    return TRUE;
}

int data::loadDataUserBook() {
    return TRUE;
}

int data::storageDataUserBook() {
    return TRUE;
}

int data::loadDataUserRequireBook() {
    return TRUE;
}

int data::storageDataUserRequireBook() {
    return TRUE;
}
