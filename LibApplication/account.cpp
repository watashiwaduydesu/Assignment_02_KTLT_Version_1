#include "account.h"

account::account()
{

}

void account::showInfomation() {
    cout << code << "/" << name << "/" << email << "/" << id << "/" << role << endl;
    cout << username << "/" << tel << "/" << day << "-" << month << "-" << year << endl;
}
