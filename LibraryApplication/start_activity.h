#ifndef START_ACTIVITY_H
#define START_ACTIVITY_H

#include "marco.h"
#include "library.h"

class start_activity : public QWidget
{
    Q_OBJECT
public:
    explicit start_activity(QWidget *parent = 0);

private:
    QVBoxLayout *main_layout;
    QLabel *title, *text_1;
    QLineEdit *edt_search;
    QHBoxLayout *layout_top, *layout_search;
    QPushButton *btn_sign_up, *btn_sign_in, *btn_quit, *btn_search;

signals:

public slots:
    void onClick_btn_sign_up();
    void onClick_btn_sign_in();
    void onClick_btn_quit();

private:
    void setListenEvent();
};

#endif // START_ACTIVITY_H
