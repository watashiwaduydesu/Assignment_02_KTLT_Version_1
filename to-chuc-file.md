# Tổ chức File lưu trữ

+ Hệ thống cần lưu trữ các thông tin sau:
	+ Danh sách các tài khoản trong hệ thống
	+ Danh sách sách trong hệ thống
	+ Danh sách yêu cầu đăng kí mới tài khoản
	+ Danh sách yêu cầu mượn sách
	+ Danh sách người dùng - sách đang mượn
	
+ Các file được lưu trong folder:
```
File/
	+ accountList.txt
	+ accountRequests.txt
	+ bookList.txt
	+ userReqiestedBook.txt
	+ userBook.txt
	+ test.txt : dùng để test dữ liệu input output khi code
```

## Tổ chức từng file:

**``File/accountList.txt``**:
+ Dòng 1: int ID_account_last: code account cuối cùng mà hệ thống cấp
+ Dòng 2: int N: số lượng account
+ 9 dòng trong N khối dòng tiếp theo theo định dạng:
	+ Dòng 1: code: mã người dùng
	+ Dòng 2: name: tên tài khoản
	+ Dòng 3: password 
	+ Dòng 4: email
	+ Dòng 5: id: số chứng minh nhân dân
	+ Dòng 6: username: tên người dùng
	+ Dòng 7: tel
	+ Dòng 8: day month year
	+ Dòng 9: int xác định vai trò (admin, user hay lib)

**``File/accountRequests.txt``**:
+ Dòng 1: int N: số lượng account
+ 9 dòng trong N khối dòng tiếp theo theo định dạng:
	+ Dòng 1: code: mã người dùng
	+ Dòng 2: name: tên tài khoản
	+ Dòng 3: password 
	+ Dòng 4: email
	+ Dòng 5: id: số chứng minh nhân dân
	+ Dòng 6: username: tên người dùng
	+ Dòng 7: tel
	+ Dòng 8: day month year
	+ Dòng 9: int xác định vai trò (admin, user hay lib)
	
**``File/bookList.txt``**:
+ Dòng 1: int ID_book_last: code book cuối cùng mà hệ thống cấp
+ Dòng 2: int N: số lượng sách
+ 5 dòng trong N khối dòng tiếp theo theo định dạng:
	+ 1: mã sách (code) 
	+ 2: tên sách (name)
	+ 3: tên tác giả (author)
	+ 4: mô tả (information)
	+ 5: remain_number
