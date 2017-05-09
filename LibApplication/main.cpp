#include <QApplication>
#include "start_activity.h"

#include "data.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start_activity w;
    w.show();

    data::loadData();

    cout << data::l_account.size() << endl;
    for (account t : data::l_account) {
        t.showInfomation();
    }
    cout << data::l_admin.size() << endl;

    data::storageData();

    return a.exec();
}
