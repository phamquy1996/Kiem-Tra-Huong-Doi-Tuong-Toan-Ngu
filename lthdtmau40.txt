//De :^[bai 40

#include<iostream>
#include<stdio>


using namespace std

//Khai bao lop
class NhanSu
{
private:
    char hoTen[31];
    char ngaySinh[11];
public:
    void nhap();
    void hienThi();
};

class NhanVien:public NhanSu
{
private:
    char maNV[10];
    float heSoLuong;
public:
    void nhap();
    void hienThi();
};

class LanhDao:public Nhanvien
{
private:
    char chucVu[60];
public:
    void nhap();
    void hienThi();
};

//===chuong trinh chinh===
int main()
{
    //khai bao 2 doi tuong sinh vien
    NhanVien nv1, nv2;

    //khai bao 1 doi tuong lanh dao
    LanhDao ld1;

    //Nhap
    cout<<"Nhap thong tin nhan vien 1:\n";
    nv1.nhap();
    cout<<"Nhap thong tin nhan vien 2:\n";
    nv2.nhap();

    cout<<"Nhap thong tin lanh dao:\n";
    ld.nhap();

    //hien thi
    cout<<"\nThong tin nhan vien 1 la:\n";
    nv1.hienThi();
    cout<<"\nThong tin nhan vien 2 la:\n";
    nv2.hienThi();

    cout<<"\nThong tin lanh dao la:\n";
    ld.hienThi();

    cout<<endl;
    return 0;
}
//===dinh nghia ham====
//ham thanh vien trong lop NhanSu
void NhanSu::nhap()
{
    cout<<"\tNhap vao ho ten: ";
    scanf("");cin.get(hoTen, sizeof(hoTen));

    cout<<"\tNhap vao ngay sinh: ";
    scanf("");cin.get(ngaySinh, sizeof(ngaySinh));
}
//-----------------------
void NhanSu::hienThi()
{
    cout<<"\tHo ten: "<<hoTen;
    cout<<"\n\tNgay Sinh: "<<ngaySinh;
}
//------------------------
//Ham thanh vien trong lop NhanVien
void NhanVien::nhap()
{
    NhanSu::hienThi();
    cout<<"\nMa nhan vien: "<<maNV;
    cout<<"\nHe so luong: "<<heSoLuong;
}
//----------------------

//ham thanh vien trong lop LanhDao
void LanhDao::nhap()
{
    Nhanvien::nhap();

    cout<<"Nhap vao chuc vuj: ";
    scanf("");cin.get(chucVu, sizeof(chucVu));
}
//-------------------------
void LanhDao::hienThi()
{
    NhanVien::hienThi();
    cout<<"\n\tChucVu: "<<chucVu;
}
