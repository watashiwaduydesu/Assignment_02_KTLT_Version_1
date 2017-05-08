#include "marco.h"
#include "library.h"

#include "start_activity.h"
#include "sign_in_activity.h"
#include "sign_up_activity.h"
#include "session_activity.h"

#include "account.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    start_activity window_start;
    window_start.show();

    return application.exec();
}
