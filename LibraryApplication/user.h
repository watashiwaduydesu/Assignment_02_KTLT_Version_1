#ifndef USER_H
#define USER_H

#include <QDate>
#include <string>
#include <vector>

using namespace std;

class user
{
public:
    user();

private:
    int code;
    string id, username, email, telephone;
    QDate birthdate;
};

#endif // USER_H
