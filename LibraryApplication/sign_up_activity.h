#ifndef SIGN_UP_ACTIVITY_H
#define SIGN_UP_ACTIVITY_H

#include "qt_library.h"
#include "data_default.h"

class sign_up_activity : public QWidget
{
    Q_OBJECT
public:
    explicit sign_up_activity(QWidget *parent = 0);

private:
    QVBoxLayout *main_layout;
    QLabel *title;
    QFormLayout *form;
    QLineEdit *account_name, *password_1, *password_2, *username, *id, *email;
    QDateEdit *birth_date;
    QHBoxLayout *layout_btn;
    QPushButton *btn_send_sign_up, *btn_cancle;

signals:

public slots:
    void onClick_btn_send_sign_up();
    void onClick_btn_cancle();

private:
    void setListenEvent();
};

#endif // SIGN_UP_ACTIVITY_H
