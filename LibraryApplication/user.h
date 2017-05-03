#ifndef USER_H
#define USER_H

#include "marco.h"
#include "library.h"

using namespace std;

class user
{
public:
    user();

private:
    int code;
    string id, email; // du lieu KHONG duoc thay doi cua mot nguoi
    string username, telephone; // du lieu co the thay doi cua mot nguoi
    QDate birthdate; // co the thay doi

public:
    // Kiem tra user moi hay da co hoac loi dua vao ID va EMAIL
    static int existUser(string id, string email);
};

#endif // USER_H
