#include "librarian.h"
#include "external.h"

void librarian::addBook(book &bk, int number) {
    if (bk.getCode() == ID_NULL) {
        bk.code = "12312";
        bk.remain_number = number;
        l_book.push_back(bk);
    }
    else {
        for (int i = 0; i < (int) l_book.size(); i++) {
            if (l_book[i].getCode() == bk.getCode()) {
                l_book[i].remain_number += number;
                break;
            }
        }
    }
}
