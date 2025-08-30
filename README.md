# 📘 Ứng dụng Quản Lý Thi Trắc Nghiệm

Dự án xây dựng hệ thống **thi trắc nghiệm** bằng ngôn ngữ **C++ (Win32 Console Application)**.  
Chương trình hỗ trợ **giáo viên** quản lý môn học, sinh viên, câu hỏi thi và **sinh viên** có thể đăng nhập để làm bài kiểm tra trực tuyến.

---

## 🚀 Chức năng chính

### 👨‍🏫 Dành cho Giáo viên
- **Quản lý môn học**: thêm, xóa, sửa, in danh sách.
- **Quản lý lớp học & sinh viên**:
  - Tạo lớp mới.
  - Thêm sinh viên vào lớp.
  - In danh sách sinh viên trong lớp.
- **Ngân hàng câu hỏi**:
  - Thêm câu hỏi trắc nghiệm từ file hoặc nhập trực tiếp.
  - Xóa, chỉnh sửa câu hỏi.
- **Quản lý kết quả thi**:
  - Xem điểm thi theo môn hoặc theo sinh viên.
  - Xuất dữ liệu ra file.

### 🎓 Dành cho Sinh viên
- **Đăng nhập** bằng tài khoản được cấp.
- **Chọn môn thi** và số lượng câu hỏi.
- **Làm bài thi trắc nghiệm** với câu hỏi được chọn ngẫu nhiên.
- **Xem kết quả sau khi nộp bài**.

---

## 🔑 Tài khoản mặc định
- **Giáo viên**
  - Username: `GV`  
  - Password: `GV`
- **Sinh viên**
  - Được tạo khi nhập danh sách sinh viên.

---

## 🛠️ Công nghệ sử dụng
- **Ngôn ngữ**: C++
- **Môi trường**: Visual Studio / Code::Blocks (Windows Console)
- **Cấu trúc dữ liệu**:
  - Danh sách liên kết (linked list) để quản lý sinh viên, lớp, điểm thi.
  - Cây nhị phân để quản lý câu hỏi thi.
- **Lưu trữ dữ liệu**: File `.txt`

---

## 📂 Cấu trúc dữ liệu
- `Lop.txt` → Danh sách lớp và sinh viên.
- `CauHoi.txt` → Ngân hàng câu hỏi trắc nghiệm.
- `DiemThi_*.txt` → Kết quả thi của sinh viên.

---

## 📸 Minh họa giao diện
- Menu chính (phân quyền: Giáo viên / Sinh viên).
- Chọn môn thi và số lượng câu hỏi.
- Màn hình làm bài thi trắc nghiệm trong console.

---

## ⚠️ Hạn chế
- Giao diện console, chưa trực quan.
- Hiệu năng chưa tối ưu khi dữ liệu lớn.
- Chưa có lưu trữ cơ sở dữ liệu (SQL), chỉ dùng file `.txt`.

---



