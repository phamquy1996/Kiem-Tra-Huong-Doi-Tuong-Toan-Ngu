//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 43(lthdtbai43.cpp): Viết chương trình quản lý nhân sự của một trường học;
nhân sự gồm có giảng viên và sinh viên; giảng viên có mã gv, họ tên và số bài báo;
sinh viên có mã sv, họ tên và điểm tbc. Nhập vào một số nhân sự trong đó có cả giảng viên
và sinh viên. Đưa ra thông tin của các nhân sự đã nhập kèm theo đánh giá:
giảng viên đánh giá là giỏi nếu số bài báo >=5, sinh viên đánh giá là giỏi
nếu điểm TBC>=8.0. Y/c cài đặt đa hình động.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//khai bao lop
class NhanSu
{
    private:
	char ten[31];
    public:
	virtual void nhap();
	virtual void hien();
};

class GiangVien:public NhanSu
{
    private:
	char MaGV[7];
	int SoBB;
    
    public:
	void nhap();
	void hien();
};

class SinhVien:public NhanSu
{
    private:
	char MaSV[7];
	float DiemTBC;
    public:
	void nhap();
	void hien();
};

//khai bao ham thong thuong
NhanSu *NhapNS();
void HienNS(NhanSu *ns);

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
void NhanSu::nhap()
{
     cout<<"\tNhap vao ten: "; scanf(" "); cin.get(ten,sizeof(ten));
}

void NhanSu::hien()
{
     cout<<"\tHo ten: "<<ten;
}

void GiangVien::nhap()
{
    NhanSu::nhap();
    cout<<"\tNhap vao ma giang vien: "; cin>>MaGV;
    cout<<"\tNhap vao so bai bao: "; cin>>SoBB;
}

void GiangVien::hien()
{
    NhanSu::hien();
    cout<<"\n\tMa giang vien: "<<MaGV;
    cout<<"\n\tSo bai bao: "<<SoBB;
    if(SoBB>=5)
	cout<<"\n\t==> Giang vien gioi!";
}

void SinhVien::nhap()
{
    NhanSu::nhap();
    cout<<"\n\tNhap vao ma sinh vien: "; cin>>MaSV;
    cout<<"\n\tNhap vao diem tbc: "; cin>>DiemTBC;
}

void SinhVien::hien()
{
    NhanSu::hien();
    cout<<"\n\tMa sinh vien: "<<MaSV;
    cout<<"\n\tDiem tbc: "<<DiemTBC;
    if(DiemTBC>=8)
	cout<<"\n\t==> Sinh vien gioi!";
}

//kdinh nghia ham thong thuong
NhanSu *NhapNS()
{
}

void HienNS(NhanSu *ns)
{

}
