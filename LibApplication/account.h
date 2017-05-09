#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "library.h"
#include "marco.h"
#include "book.h"

using namespace std;

class account
{   // Tao ham friend voi cac lop con va lop data
    friend class data;
    friend class user;
    friend class librarian;
    friend class admin;

protected:
    string code;
    string name;
    int password;
    string email, id, username, tel;
    int day, month, year;
    int role;

    void changePassword(int new_password) {password = new_password;}

public:
    account();
    account(string name_, int password_, string email_, string id_, string username_, string tel_, int day_, int month_, int year_, int role_, string code_ = "")
        : name(name_), password(password_), email(email_), id(id_), username(username_), tel(tel_), day(day_), month(month_), year(year_), role(role_) {
    }

    string getCode() {return code;}
    string getName() {return name;}
    bool checkPassword(int password_) {return password == password_;}
    string getEmail() {return email;}
    string getID() {return id;}
    string getUsername() {return username;}
    string getTel() {return tel;}
    int getDay() {return day;}
    int getMonth() {return month;}
    int getYear() {return year;}
    int getRole() {return role;}

    void showInfomation(); // ham dung de test mau du lieu

    book findBook_code(string code_book);
    book findBook_name(string name_book);
    book findBook_author(string author);
    book findBook_information(string information);
};

#endif // ACCOUNT_H
