#ifndef START_ACTIVITY_H
#define START_ACTIVITY_H

#include "marco.h"
#include "library.h"

#include "sign_in_activity.h"
#include "sign_up_activity.h"
#include "session_activity.h"
#include "account.h"

class start_activity : public QWidget
{
    Q_OBJECT
public:
    explicit start_activity(QWidget *parent = 0);

private:
    void setUI();
    QVBoxLayout *main_layout;
    QLabel *title, *text_1;
    QLineEdit *edt_search;
    QHBoxLayout *layout_top, *layout_search;
    QPushButton *btn_sign_up, *btn_sign_in, *btn_quit, *btn_search;

    account *account_c;
    sign_in_activity *window_sign_in;
    sign_up_activity *window_sign_up;
    session_activity *window_session;

    void setListenEvent();

signals:

public slots:
    void onClick_btn_sign_up() {window_sign_up->show();}
    void onClick_btn_sign_in() {window_sign_in->show();}
    void onClick_btn_quit() {qApp->quit();}
    void open_window_session();

public:
    void closeEvent(QCloseEvent *) {qApp->quit();}
};

#endif // START_ACTIVITY_H
