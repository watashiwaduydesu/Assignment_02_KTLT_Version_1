#include "marco.h"
#include "library.h"

#include "start_activity.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    start_activity window_start;
    window_start.show();

    return a.exec();
}
