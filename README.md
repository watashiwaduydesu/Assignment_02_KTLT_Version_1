# Assignment 02 - Kỹ thuật lập trình

+ Sử dụng QT Creator để thực hiện project
+ Một số kiến thức QT cơ bản : 
https://github.com/huynhsamha/Assignment_02_KTLT 

## Một số khái niệm

** Phiên làm việc: SESSION_ACTIVITY **
+ Khi người dùng đăng nhập bằng 1 tài khoản thành công (đúng account_name và password), một phiên làm việc được mở ra.
+ Một phiên làm việc gắn liền với một tài khoản account.
+ Một tài khoản account có thể giữ 1 trong 3 vai trò.
+ Mở đầu phiên làm việc sẽ load dữ liệu từ file.
+ Kết thúc phiên làm việc sẽ lưu dữ liệu xuống file.
+ Tùy vào các role của account, sẽ load các dữ liệu cần thiết.

+ Nếu account có role là manager:
++ Load dữ liệu account từ file LIST_ACCOUNT.txt
++ Load dữ liệu user từ file LIST_USER.txt và DataUser/...
++ Load dữ liệu require account và require user từ file REQUIREMENT_ACCOUT.txt và REQUIREMENT_USER.txt

+ Nếu account có role là librarian:

+ Nếu account có role là reader:


## Cấu trúc file:

+ 		storage/
+			LIST_USER.txt 
+			LIST_ACCOUNT.txt
+			REQUIREMENT_ACCOUNT.txt
+			REQUIREMENT_USER.txt
+			/DataUsers/
+				<Mã code>.txt (IDU000000.txt)
+			/DataBooks/
+				<Mã code>.txt (IDB000000.txt)

				
**LIST_ACCOUNT.txt**
+ 		N
+ 		account_name hash_password active code is_manager is_librarian is_reader
+ 		...


**LIST_USER.txt**
+ 		N
+ 		code email id
+ 		...


**IDU000000.txt**
+ 		code 
+ 		email 
+ 		id 
+ 		username 
+ 		day month year 
+ 		telephone
+		n : number account
+ 		account name 1
+ 		...


**REQUIREMENT_USER.txt**
+		email id 
+		username 
+		day month year 
+		telephone
+		account_name
+		password
+		...


**REQUIREMENT_ACCOUNT.txt**
