#pragma once
#include<string>
using namespace std;

typedef struct mMonHoc {
	char *maMH = new char[15];
	string tenMH;
} MonHoc;

typedef struct mDiemThi {
	char* maMH = new char[15];
	float diem;
} DiemThi;

typedef struct mCauHoi {
	int id = -1;
	char *maMH = new char[15];
	string noiDung;
	string A;
	string B;
	string C;
	string D;
	string DA;
} CauHoi;

typedef struct mNodeDiemThi {
	struct mNodeDiemThi *Next;
	DiemThi Data;
} NodeDiemThi;


typedef struct mSinhVien {
	string maSV;
	string ho;
	string ten;
	string gioiTinh;
	string passwork;
	NodeDiemThi *DanhSach;
} SinhVien;

typedef struct mNodeSinhVien {
	struct mNodeSinhVien *Next;
	SinhVien Data;
} NodeSinhVien;

typedef struct mLop {
	string maLop;
	string tenLop;
	NodeSinhVien *DanhSach;
} Lop;

typedef struct mNodeMonHoc {
	struct mNodeMonHoc *Left;
	struct mNodeMonHoc *Right;
	MonHoc Data;
} NodeMonHoc;

typedef struct mDanhSachLop {
	const int MaxSize = 500;
	Lop *Data = new Lop[MaxSize];
	int Top = 0;
} DanhSachLop;

typedef struct mDanhSachCauHoiThi {
	const int MaxSize = 2000;
	CauHoi *Data = new CauHoi[MaxSize];
	int Count = 0;
} DanhSachCauHoiThi;

typedef struct mDanhSachCauHoiThiTheoMon {
	const int MaxSize = 500;
	CauHoi *Data = new CauHoi[MaxSize];
	int isChecked[500] = { 0 };
	int Count = 0;
} DanhSachCauHoiThiTheoMon;

typedef struct mDanhSachSinhVienTheoLop {
	const int MaxSize = 200;
	SinhVien *Data = new SinhVien[MaxSize];
	int Top = 0;
} DanhSachSinhVienTheoLop;