#include "session_activity.h"

session_activity::session_activity(QWidget *parent) : QWidget(parent)
{
    this->setFont(FONT_SIZE_NORMAL);
    this->setMinimumSize(1000, 500);
    this->setWindowTitle("Phiên làm việc của bạn");

    main_layout = new QVBoxLayout(this);

    this->addMenuTop();
    this->addFunctionReader();
    this->addFunctionManager();
    this->addFunctionLibrarian();

    main_layout->addStretch(1);
    this->setLayout(main_layout);
}

void session_activity::addMenuTop()
{
    layout_menu_top = new QHBoxLayout();

    menu_left = new QMenuBar();
    menu_right = new QMenuBar();
    menu_left->setFont(FONT_SIZE_NORMAL_BOLD);
    menu_right->setFont(FONT_SIZE_NORMAL_BOLD);

    information = menu_left->addMenu("THÔNG TIN NGƯỜI DÙNG");
    notification = menu_left->addMenu("THÔNG BÁO");
    history = menu_left->addMenu("LỊCH SỬ GIAO DỊCH");
    change_password = menu_left->addMenu("ĐỔI MẬT KHẨU");
    creat_new_account = menu_left->addMenu("TẠO THÊM TÀI KHOẢN");
    exit = menu_right->addMenu("THOÁT");

    layout_menu_top->addWidget(menu_left, 0, Qt::AlignLeft);
    layout_menu_top->addWidget(menu_right, 0, Qt::AlignRight);

    main_layout->addLayout(layout_menu_top);
    main_layout->addSpacing(25);
}

void session_activity::addFunctionReader()
{
    rtitle = new QLabel("Chức năng độc giả:");
    rtitle->setFont(FONT_SIZE_NORMAL_BOLD);
    rtit_search_book = new QLabel("Tìm kiếm, mượn sách:");

    rlayout_search_book = new QHBoxLayout();

    redt_search_book = new QLineEdit();
    redt_search_book->setMaxLength(MAX_LENGTH_SEARCH);
    redt_search_book->setTextMargins(15,5,15,5);
    redt_search_book->setPlaceholderText("Ví dụ: Lap trinh C++");
    redt_search_book->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    rlayout_search_book->addWidget(redt_search_book, 5);

    rbtn_search_book = new QPushButton("Tìm kiếm");
    rlayout_search_book->addWidget(rbtn_search_book, 1);

    rlayout_search_book->setAlignment(Qt::AlignCenter);
    rlayout_search_book->setContentsMargins(20, 5, 20, 5);

    main_layout->addWidget(rtitle);
    main_layout->addWidget(rtit_search_book);
    main_layout->addLayout(rlayout_search_book);
    main_layout->addSpacing(25);
}

void session_activity::addFunctionManager()
{
   mtitle = new QLabel("Chức năng quản lí người dùng:");
   mtitle->setFont(FONT_SIZE_NORMAL_BOLD);

   mtit_search_user = new QLabel("1. Quản lí người dùng (Tìm kiếm / Xem / Mở - Khóa / Xóa): ");
   mlayout_search_user = new QHBoxLayout();
   medt_search_user = new QLineEdit();
   medt_search_user->setMaxLength(MAX_LENGTH_SEARCH);
   medt_search_user->setTextMargins(15,5,15,5);
   medt_search_user->setPlaceholderText("Ví dụ: Nhat Nguyet Thanh Giao");
   medt_search_user->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
   mbtn_search_user = new QPushButton("Tìm kiếm");
   mlayout_search_user->addWidget(medt_search_user, 5);
   mlayout_search_user->addWidget(mbtn_search_user, 1);
   mlayout_search_user->setAlignment(Qt::AlignCenter);
   mlayout_search_user->setContentsMargins(20, 5, 20, 5);

   mtit_search_account = new QLabel("2. Quản lí tài khoản người dùng (Tìm kiếm / Xem / Mở - Khóa / Xóa): ");
   mlayout_search_account = new QHBoxLayout();
   medt_search_account = new QLineEdit();
   medt_search_account->setMaxLength(MAX_LENGTH_SEARCH);
   medt_search_account->setTextMargins(15,5,15,5);
   medt_search_account->setPlaceholderText("Ví dụ: nhat-nguyet.than_giao");
   medt_search_account->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
   mbtn_search_account = new QPushButton("Tìm kiếm");
   mlayout_search_account->addWidget(medt_search_account, 5);
   mlayout_search_account->addWidget(mbtn_search_account, 1);
   mlayout_search_account->setAlignment(Qt::AlignCenter);
   mlayout_search_account->setContentsMargins(20, 5, 20, 5);

   mlayout_solve_requirement = new QHBoxLayout();
   mtit_solve_requirement = new QLabel("3. Xử lí yêu cầu từ người dùng");
   mbtn_solve_requirement = new QPushButton("Xem các yêu cầu");
   mlayout_solve_requirement->addWidget(mbtn_solve_requirement);
   mlayout_solve_requirement->setAlignment(Qt::AlignCenter);

   main_layout->addWidget(mtitle);
   main_layout->addWidget(mtit_search_user);
   main_layout->addLayout(mlayout_search_user);
   main_layout->addWidget(mtit_search_account);
   main_layout->addLayout(mlayout_search_account);
   main_layout->addWidget(mtit_solve_requirement);
   main_layout->addLayout(mlayout_solve_requirement);
   main_layout->addSpacing(25);
}

void session_activity::addFunctionLibrarian()
{

}
