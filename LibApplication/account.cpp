#include "account.h"
#include "external.h"

void account::showInfomation() {
    cout << code << "/" << name << "/" << email << "/" << id << "/" << role << endl;
    cout << username << "/" << tel << "/" << day << "-" << month << "-" << year << endl;
}

vector<book> account::findBook_code(string code_book) {
    vector<book> res;
    for (book bk : l_book) {
        if (bk.getCode() == code_book)
            res.push_back(bk);
    }
    return res;
}

vector<book> account::findBook_author(string author) {
    // HAM SO CHUOI
    vector<book> res;
    return res;
}

vector<book> account::findBook_name(string name) {
    // HAM SO CHUOI
    vector<book> res;
    return res;
}

vector<book> account::findBook_information(string information) {
    // HAM SO CHUOI
    vector<book> res;
    return res;
}

