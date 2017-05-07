#include "marco.h"
#include "library.h"

#include "start_activity.h"
#include "sign_in_activity.h"
#include "sign_up_activity.h"
#include "session_activity.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    start_activity *window_start = new start_activity();
    window_start->show();

    return application.exec();
}
