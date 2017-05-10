#include "data.h"

int data::loadDataAccount() {
    ifstream f(FILE_ACCOUNT);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    f >> ID_account;
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
    f << ID_account << endl;
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
    ifstream f(FILE_BOOK);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    f >> ID_book;
    int n = 0;
    f >> n;
    for (int i = 0; i < n; ++i) {
        book a;
        f.get();
        getline(f, a.code);
        getline(f, a.name);
        getline(f, a.author);
        getline(f, a.information);
        f >> a.remain_number;
        l_book.push_back(a);
    }
    f.close();
    return TRUE;
}

int data::storageDataBook() {
    ofstream f(FILE_BOOK);
    if (! f.is_open()) return NOT_ACCESS_FILE;
    f << ID_book << endl;
    f << l_book.size() << endl;
    for (book a: l_book) {
        f << a.code << endl << a.name << endl << a.author << endl;
        f << a.information << endl << a.remain_number << endl;
    }
    f.close();
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
