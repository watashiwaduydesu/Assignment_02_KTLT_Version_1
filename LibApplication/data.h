#ifndef DATA_H
#define DATA_H

#include "library.h"
#include "marco.h"
#include "account.h"
#include "admin.h"
#include "librarian.h"
#include "user.h"
#include "book.h"

using namespace std;

class data // lop data quan li du lieu static cho toan bo chuong trinh
        // load du lieu tu file, storage du lieu xuong file
{
public:
    // danh sach cac du lieu static
    static vector<account> l_account, l_account_require;
    static vector<admin> l_admin, l_admin_require;
    static vector<librarian> l_lib, l_lib_require;
    static vector<user> l_user, l_user_require;
    static vector<book> l_book, l_book_require;

    static int loadData() { // ham load du lieu tu file
        loadDataAccount();
        loadDataAccountRequire();
        loadDataBook();
        loadDataBookRequire();
        return TRUE;
    }

    static int storageData() { // ham luu du lieu xuong file
        storageDataAccount();
        storageDataAccountRequire();
        storageDataBook();
        storageDataBookRequire();
        return TRUE;
    }

    // cac ham thanh vien trien khai load va storage
    static int loadDataAccount();
    static int loadDataAccountRequire();
    static int loadDataBook();
    static int loadDataBookRequire();

    static int storageDataAccount();
    static int storageDataAccountRequire();
    static int storageDataBook();
    static int storageDataBookRequire();
};

#endif // DATA_H
