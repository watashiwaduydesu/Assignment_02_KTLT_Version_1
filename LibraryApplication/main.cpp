#include <QApplication>
#include "start_activity.h"
#include "sign_up_activity.h"
#include "sign_in_activity.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    start_activity window_start;
    sign_up_activity window_sign_up;
    sign_in_activity window_sign_in;
    window_start.show();
    window_sign_up.show();
    window_sign_in.show();

    return a.exec();
}
