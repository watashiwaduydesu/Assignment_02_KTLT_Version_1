# Tổ chức File lưu trữ

+ Hệ thống cần lưu trữ các thông tin sau:
	+ Danh sách các tài khoản trong hệ thống
	+ Danh sách sách trong hệ thống
	+ Danh sách yêu cầu đăng kí mới tài khoản
	+ Danh sách yêu cầu mượn sách
	
+ Các file được lưu trong folder:
```
File/
	+ accountList.txt
	+ accountRequirement.txt
	+ bookList.txt
	+ bookRequirement.txt
	+ test.txt : dùng để test dữ liệu input output khi code
```

## Tổ chức từng file:

**``File/accountList.txt``**:
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
