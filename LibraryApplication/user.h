#ifndef USER_H
#define USER_H

#include "marco.h"
#include "library.h"
#include "account.h"

using namespace std;

class user // lop nguoi dung
{
public:
    user();

private:
    int code; // hinh thanh khi dang ki thanh cong
    string email, id, username, telephone;
    QDate birthdate;
    vector<account> list_account;

public:
    // Kiem tra user moi hay da co hoac loi dua vao ID va EMAIL
    static int existUser(string email, string id);
};

#endif // USER_H
