#ifndef SIGN_UP_ACTIVITY_H
#define SIGN_UP_ACTIVITY_H

// GIAO DIEN DANG KI TAI KHOAN

#include "marco.h"
#include "library.h"
#include "account.h"
#include "user.h"

class sign_up_activity : public QWidget
{
    Q_OBJECT
public:
    explicit sign_up_activity(QWidget *parent = 0);

private:
    QVBoxLayout *main_layout;
    QLabel *title;
    QFormLayout *form;
    QLineEdit *account_name, *password_1, *password_2;
    QLineEdit *id, *email, *username, *telephone;
    QDateEdit *birth_date;
    QHBoxLayout *layout_btn;
    QPushButton *btn_send_sign_up, *btn_cancle;

private:
    void reset();
    void setListenEvent();

signals:

public slots:
    void onClick_btn_send_sign_up();
    void onClick_btn_cancle();

public:
    void closeEvent(QCloseEvent *) {
        this->reset();
    }
};

#endif // SIGN_UP_ACTIVITY_H
