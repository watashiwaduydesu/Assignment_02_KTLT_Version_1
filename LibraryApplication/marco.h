#ifndef DATA_DEFAULT_H
#define DATA_DEFAULT_H

#define MAX_LENGTH_INPUT        25
#define MAX_LENGTH_SEARCH       200

#define FONT_SIZE_SMALL         QFont("Verdana", 9)
#define FONT_SIZE_NORMAL        QFont("Verdana", 10)
#define FONT_SIZE_MEDIUM        QFont("Verdana", 11)
#define FONT_SIZE_LARGE         QFont("Verdana", 12)
#define FONT_SIZE_XLARGE        QFont("Verdana", 13)
#define FONT_SIZE_XXLARGE       QFont("Verdana", 15)

#define TRUE                    1000
#define FALSE                   1001
#define NOT_ACCESS_FILE         1002
#define ERROR                   1003
#define WRONG_PASSWORD          1004
#define NOT_EXIST               1005
#define LOCKED_ACCOUNT            1006

#define REGEXP_ACCOUNT_NAME     "[A-Za-z0-9_.-]{5,}"
#define REGEXP_PASSWORD         "\\S{5,}"
#define REGEXP_ID               "[0-9]{5,12}"
#define REGEXP_EMAIL            "^[_A-Za-z0-9-\\+]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9-]+(\\.[A-Za-z0-9]+)*(\\.[A-Za-z]{2,})$"
#define REGEXP_TELEPHONE        "[0-9]{10,11}"

#endif // DATA_DEFAULT_H
