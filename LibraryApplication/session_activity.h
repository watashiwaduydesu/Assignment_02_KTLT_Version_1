#ifndef SESSION_ACTIVITY_H
#define SESSION_ACTIVITY_H

#include "marco.h"
#include "library.h"
#include "account.h"
#include "book.h"
#include "user.h"

class session_activity : public QWidget // PHIEN LAM VIEC CUA NGUOI DUNG
{
    Q_OBJECT
public:
    explicit session_activity(account *account_sign_in, QWidget *parent = 0);

private:
    account *account_c;

    set<account> list_account, list_require_account;
    set<book> list_book, list_require_book;
    set<user> list_user, list_require_user;

    int loadData();
    int loadData_list_account();
    int loadData_list_require_account();
    int loadData_list_book();
    int loadData_list_require_book();
    int loadData_list_user();
    int loadData_list_require_user();

private:
    QVBoxLayout *main_layout;

    // MENU TOP ------------
    QHBoxLayout *layout_menu_top;

    QMenuBar *menu_left, *menu_right;
    QMenu *information, *notification, *history;
    QMenu *creat_new_account, *change_password, *exit;

    // MENU READER ---------
    QLabel *rtitle, *rtit_search_book;
    QHBoxLayout *rlayout_search_book;
    QLineEdit *redt_search_book;
    QPushButton *rbtn_search_book;

    // MENU MANAGER ---------
    QLabel *mtitle, *mtit_search_user, *mtit_search_account, *mtit_solve_requirement;
    QHBoxLayout *mlayout_search_user, *mlayout_search_account, *mlayout_solve_requirement;
    QLineEdit *medt_search_user, *medt_search_account;
    QPushButton *mbtn_search_user, *mbtn_search_account, *mbtn_solve_requirement;

    // MENU LIBRABRIAN ------

    void addMenuTop();
    void addFunctionReader();
    void addFunctionManager();
    void addFunctionLibrarian();

signals:

public slots:

public:
    void closeEvent(QCloseEvent *) {qApp->quit();}
};

#endif // SESSION_ACTIVITY_H
