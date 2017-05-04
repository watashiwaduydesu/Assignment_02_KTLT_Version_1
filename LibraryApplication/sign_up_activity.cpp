#include "sign_up_activity.h"

sign_up_activity::sign_up_activity(QWidget *parent) : QWidget(parent)
{
    this->move(350, 100);
    this->setMinimumWidth(500);
    this->setFont(FONT_SIZE_NORMAL);
    this->setWindowTitle("Đăng kí tài khoản mới");

    // KHOI TAO LAYOUT CHO WIDGET
    main_layout = new QVBoxLayout(this);

    // TIEU DE CHO WIDGET
    title = new QLabel("ĐĂNG KÍ MỚI TÀI KHOẢN NGƯỜI DÙNG");
    title->setFont(FONT_SIZE_XLARGE);
    title->setAlignment(Qt::AlignCenter);
    title->setMargin(30);
    title->setStyleSheet("font-weight: bold");
    main_layout->addWidget(title);

    // LAYOUT FORM DANG KI
    form = new QFormLayout();

    account_name = new QLineEdit();
    password_1 = new QLineEdit();
    password_2 = new QLineEdit();
    id = new QLineEdit();
    email = new QLineEdit();
    username = new QLineEdit();
    telephone = new QLineEdit();
    birth_date = new QDateEdit();

    account_name->setMaxLength(MAX_LENGTH_INPUT);
    password_1->setMaxLength(MAX_LENGTH_INPUT);
    password_2->setMaxLength(MAX_LENGTH_INPUT);
    id->setMaxLength(MAX_LENGTH_INPUT);
    email->setMaxLength(MAX_LENGTH_INPUT);
    username->setMaxLength(MAX_LENGTH_INPUT);
    telephone->setMaxLength(MAX_LENGTH_INPUT);

    QRegExp re; // set CU PHAP FORMAT CHO INPUT
    re.setPattern(REGEXP_ACCOUNT_NAME);
    account_name->setValidator(new QRegExpValidator(re));
    re.setPattern(REGEXP_PASSWORD);
    password_1->setValidator(new QRegExpValidator(re));
    password_2->setValidator(new QRegExpValidator(re));
    password_1->setEchoMode(QLineEdit::Password);
    password_2->setEchoMode(QLineEdit::Password);
    re.setPattern(REGEXP_ID);
    id->setValidator(new QRegExpValidator(re));
    re.setPattern(REGEXP_EMAIL);
    email->setValidator(new QRegExpValidator(re));
    re.setPattern(REGEXP_TELEPHONE);
    telephone->setValidator(new QRegExpValidator(re));

    birth_date->setCalendarPopup(true);
    birth_date->setDisplayFormat("dd/MM/yyyy");
    birth_date->setMaximumDate(QDate::currentDate().addYears(-16)); // toi thieu phai 16 tuoi
    birth_date->setMinimumDate(QDate::currentDate().addYears(-120)); // toi da la 120 tuoi

    form->addRow("A. Thông tin người dùng", new QLabel(""));
    form->addRow("Địa chỉ Email:", email);
    form->addRow("Chứng minh nhân dân:", id);
    form->addRow("Tên người dùng:", username);
    form->addRow("Số điện thoại:", telephone);
    form->addRow("Ngày sinh:", birth_date);
    form->addRow("", new QLabel(""));
    form->addRow("B. Thông tin tài khoản đọc giả:", new QLabel(""));
    form->addRow("Tên tài khoản:", account_name);
    form->addRow("Mật khẩu:", password_1);
    form->addRow("Xác nhận mật khẩu:", password_2);

    form->setHorizontalSpacing(15);
    form->setVerticalSpacing(10);
    form->setContentsMargins(20,0,20,0);
    main_layout->addLayout(form);

    // LAYOUT CHO 2 BUTTON send VA cancle
    layout_btn = new QHBoxLayout();

    btn_send_sign_up = new QPushButton("Gửi");
    btn_cancle = new QPushButton("Thoát");
    layout_btn->addStretch(1);
    layout_btn->addWidget(btn_send_sign_up);
    layout_btn->addWidget(btn_cancle);
    layout_btn->addStretch(1);
    layout_btn->setSpacing(30);
    layout_btn->setMargin(20);
    main_layout->addLayout(layout_btn);

    // SET LAYOUT CHO WIDGET
    main_layout->addStretch(1);
    this->setLayout(main_layout);

    // ADD connect SIGNAL va SLOT cho WIDGET
    this->setListenEvent();
}

void sign_up_activity::reset() {
    this->hide();
    this->move(350, 100);
    account_name->setText("");
    password_1->setText("");
    password_2->setText("");
    id->setText("");
    email->setText("");
    username->setText("");
    telephone->setText("");
}

void sign_up_activity::setListenEvent() {
    connect(btn_send_sign_up, SIGNAL(clicked(bool)), this, SLOT(onClick_btn_send_sign_up()));
    connect(btn_cancle, SIGNAL(clicked(bool)), this, SLOT(onClick_btn_cancle()));
}

void sign_up_activity::onClick_btn_send_sign_up() {
    QMessageBox *message = new QMessageBox(this);
    message->setFont(FONT_SIZE_NORMAL);
    message->setWindowTitle("Thông báo");
    message->setContentsMargins(20, 20, 20, 20);

    // KIEM TRA THONG TIN
    string m_account_name = account_name->text().toStdString();
    string m_password_1 = password_1->text().toStdString();
    string m_password_2 = password_2->text().toStdString();
    string m_id = id->text().toStdString();
    string m_email = email->text().toStdString();
    string m_username = username->text().toStdString();
    string m_telephone = telephone->text().toStdString();

    for (;;) { // BAT DAU KIEM TRA
    // KIEM TRA DIA CHI email HOP LE
    QRegExp re(REGEXP_EMAIL);
    if (!re.exactMatch(email->text())) {
        message->setText("Địa chỉ Email không hợp lệ!\n");
        break;
    }
    // KIEM TRA user CO TON TAI KHONG?
    int check = user::existUser(m_email, m_id);
    if (check == ERROR) {
        message->setText("Email hoặc Chứng minh nhân dân này đã được dùng!\n");
        break;
    } else if (check == FALSE) {
    } else {
        message->setText("Lỗi hệ thống!\n");
        break;
    }
    // KIEM TRA username RONG
    if (m_username.size() == 0) {
        message->setText("Tên người dùng không thể rỗng");
        break;
    }
    // KIEM TRA SO DIEN THOAI
    if (m_telephone.size() < 10) {
        message->setText("Số điện thoại không hợp lệ!\n");
        break;
    }
    // KIEM TRA account_name ?
    if (m_account_name.size() < 5) {
        message->setText("Tên tài khoản tối thiêu 5 kí tự");
        break;
    }
    // KIEM TRA account_name CO TON TAI ?
    if (account::existAccountName(m_account_name) == TRUE) {
        message->setText("Tên tài khoản đã được dùng!\n");
        break;
    }
    // KIEM TRA password_1 == password_2 ?
    if (m_password_1 != m_password_2) {
        message->setText("Mật khẩu không khớp!\n");
        break;
    }
    if (m_password_1.size() < 5) {
        message->setText("Mật khẩu quá yếu!\nMật khẩu tối thiểu 5 kí tự!\n");
        break;
    }
    // OK ! tat ca deu on
    message->setText("Đăng kí thành công!\n"
                     "Yêu cầu của bạn sẽ được Quản lý người dùng xét duyệt!\n"
                     "Bạn cần đến thư viện để hoàn tất việc đăng kí!");
    break;
    }  // KET THUC KIEM TRA

    message->exec();
}

void sign_up_activity::onClick_btn_cancle() {
    this->reset();
}
