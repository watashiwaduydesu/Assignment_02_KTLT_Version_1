#include "book.h"
#include "external.h"


void book::showInformation() {
    cout << code << "/" << name << "-/-" << author << "/" << remain_number << endl;
    cout << information << endl;
}
