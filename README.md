# Assignment 2 Kỹ thuật lập trình
## Chương trình mô phỏng thư viện

### Mới thay đổi :)
+ Danh sách **l_account, ...** từ static trong class **data**, chuyển thành biến **``extern``** trong file ``external.h``, được khởi tạo trong file ``external.cpp``.
	+ Lợi ích: truy cập được ở các file bất kì khi ``#include "external.h" ``, mấy thằng trong này là toàn cục ở các file luôn.
+ Trong file ``**account.h**``, các hàm ``findBook()...`` , giá trị trả về thay từ ``book`` bằng ``vector<book>``.
	+ Lý do và lợi ích: nếu size = 0, tức không có sách tìm thấy, nếu có nhiều sách cùng lượng thông tin, có khả năng trả về đầy đủ.
+ Thêm class ``**user_book**`` quản lí một cặp user và book, xử lí trong các tình huống: mượn sách, nợ sách, trả sách, đòi sách, ..., nói chung liên quan giữa người dùng và sách.
	+ Bỏ **``vector<book> l_bookRequirement``**. 
	+ Bỏ file **bookRequirement.txt**. 
	+ Thêm **``vector<user_book> l_user_book``**: người dùng - sách đang được mượn
	+ Thêm file **userBook.txt**, tương ứng
	+ Thêm **``vector<user_book> l_user_require_book``**: người dùng yêu cầu sách
	+ Thêm file **userRequireBook.txt**, tương ứng
+ Thêm vào file **extern**, hai hàm 
	+ (Cái này không cần quan tâm, chỉ dùng khi xử lí giao diện lúc người ta đăng nhập, đăng kí, ...)
	+ **``int hashPassword(string password)``** : mã hóa mật khẩu thành số int (MOD 1e9) 
	+ **``bool checkPassword(string password, int value)``** : kiểm tra xem mật khẩu ``password`` có trùng khớp với ``value`` password của người dùng.
	
### Các phiên bản:
+ Phiên bản chính (chưa có giao diện) là LibApplcation (version 2, đang làm trên cái này)
+ Phiên bản cũ (có một số giao diện) là LibraryApplicaion (version 1, không làm trên cái này nữa, chỉ dùng để thêm giao diện sau khi version 2 làm xong!)
+ Các file khác là lưu trữ các quy định trong lúc lập trình để thống nhất.

### Tổ chức dữ liệu: 
https://github.com/huynhsamha/Assignment_02_KTLT_Version_1/blob/master/to-chuc-du-lieu.md

### Tổ chức File lưu trữ:
https://github.com/huynhsamha/Assignment_02_KTLT_Version_1/blob/master/to-chuc-file.md

### Nhiệm vụ:
+ Hiện thực các hàm load và storage dữ liệu trong file data.h và data.cpp


