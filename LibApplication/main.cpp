#include <QApplication>
#include "start_activity.h"

#include "external.h"
#include "data.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start_activity w;
    w.show();

    data::loadData();

//    cout << l_account.size() << endl;
//    for (account t : l_account) {
//        t.showInfomation();
//    }
//    cout << l_admin.size() << endl;

//    cout << l_book.size() << endl;
//    for (book t : l_book) {
//        t.showInformation();
//    }

    data::storageData();

    return a.exec();
}
