#ifndef SIGN_IN_ACTIVITY_H
#define SIGN_IN_ACTIVITY_H

#include "marco.h"
#include "library.h"
#include "account.h"
#include "user.h"

class sign_in_activity : public QWidget
{
    Q_OBJECT
public:
    explicit sign_in_activity(QWidget *parent = 0);

private:
    void setUI();
    QVBoxLayout *main_layout;
    QLabel *title;
    QFormLayout *form;
    QLineEdit *account_name, *password;
    QHBoxLayout *layout_btn;
    QPushButton *btn_send_sign_in, *btn_cancle;

    account *account_c;

public:
    account *getAccount() {return account_c;}

private:
    void reset();
    void setListenEvent();

signals:
    void signInSucceed();

public slots:
    void onClick_btn_send_sign_in();
    void onClick_btn_cancle() {this->reset();}

public:
    void closeEvent(QCloseEvent *) {this->reset();}
};

#endif // SIGN_IN_ACTIVITY_H
