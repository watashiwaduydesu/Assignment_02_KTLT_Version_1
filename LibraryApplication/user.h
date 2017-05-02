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
    string id, email, username, telephone;
    QDate birthdate;
};

#endif // USER_H
