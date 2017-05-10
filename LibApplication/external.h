#ifndef EXTERNAL_H
#define EXTERNAL_H

#include "library.h"
#include "marco.h"
#include "account.h"
#include "user.h"
#include "librarian.h"
#include "admin.h"
#include "book.h"
#include "user_book.h"

extern vector<account> l_account, l_account_require;
extern vector<admin> l_admin, l_admin_require;
extern vector<librarian> l_lib, l_lib_require;
extern vector<user> l_user, l_user_require;
extern vector<book> l_book;
extern vector<user_book> l_user_book, l_user_require_book;

extern int hashPassword(string password);
extern bool checkPassword(string password, int value);

extern int ID_account, ID_book;
extern string allocateIDAccount();
extern string allocateIDBook();

#endif // EXTERNAL_H
