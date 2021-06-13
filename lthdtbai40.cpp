//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
 Bài 40(lthdtbai40.cpp): Một nhân sự nói chung có họ tên và ngày sinh. Nhân viên trong
 một công ty là một loại nhân sự nhưng có thêm mã nhân viên và hệ số lương. Lãnh đạo
 trong công ty là một loại nhân viên có thêm chức vụ. Nhập vào thông tin của một số nhân viên
 và lãnh đạo trong công ty. Đưa ra các thông tin đã nhập.
 */

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class NhanSu
{
    private:
	char hoTen[31];
	char ngaySinh[31];
    public:
	virtual void nhap();
	virtual void hien();
};

class NhanVien:public NhanSu
{
    private:
	char maNV[10];
	float hSL;

    public:
	void nhap();
	void hien();
};

class LanhDao:public NhanSu
{
    private:
	char maLD[10];
	float hSL;
	char chucVu[20];
    
    public:
	void nhap();
	void hien();
};
//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===

void NhanSu::nhap()
{
    cout<<"Nhap ho ten: ";
    scanf(" ");cin.get(hoTen,sizeof(hoTen));

    cout<<"Nhap vao ngay sinh: ";
    scanf(" ");cin.get(ngaySinh,sizeof(ngaySinh));
}

void NhanSu::hien()
{
   cout<<"\tHo ten: "<<hoTen; 
   cout<<"\n\tNgay Sinh: "<<ngaySinh;
}

void NhanVien::nhap()
{
   // NhanSu::hien();
   // cout<<"\nMa nhan vien: "<<maNV;
   // cout<<"\nHe so luong: "<<hSL;
}

void LanhDao::nhap()
{
    //Nhanvien::nhap();

    //cout<<"Nhap vao chuc vuj: ";
    //scanf("");cin.get(chucVu, sizeof(chucVu));
}

void LanhDao::hien()
{
  //  NhanVien::hien();
    //cout<<"\n\tChucVu: "<<chucVu;
}
