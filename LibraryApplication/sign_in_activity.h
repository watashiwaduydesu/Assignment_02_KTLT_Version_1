#ifndef SIGN_IN_ACTIVITY_H
#define SIGN_IN_ACTIVITY_H

#include "qt_library.h"
#include "data_default.h"

class sign_in_activity : public QWidget
{
    Q_OBJECT
public:
    explicit sign_in_activity(QWidget *parent = 0);

private:
    QVBoxLayout *main_layout;
    QLabel *title;
    QFormLayout *form;
    QLineEdit *account_name, *password;
    QHBoxLayout *layout_btn;
    QPushButton *btn_send_sign_in, *btn_cancle;

signals:

public slots:
    void onClick_btn_send_sign_in();
    void onClick_btn_cancle();

private:
    void setListenEvent();
};

#endif // SIGN_IN_ACTIVITY_H