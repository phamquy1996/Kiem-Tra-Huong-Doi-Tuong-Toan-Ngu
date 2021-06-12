//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 23(lthdtbai23.cpp): Nhập vào một danh sách n mặt hàng; mỗi mặt hàng có tên hàng, số lượng, đơn giá. Tính tổng tiền của n mặt hàng.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class MatHang
{
    private:
	char tenMatHang[50];
	int soLuong;
	float donGia;

    public:
	float tinhTien();
	friend istream& operator>>(istream &cin,MatHang &mh);
	friend ostream& operator<<(ostream &cout,MatHang &mh);
};

//===Chuong trinh chinh===
int main()
{
    int n;
    float tongTien=0;

    cout<<endl;
    return 0;
}

//===Dinh nghia ham==
float MatHang::tinhTien()
{
    return soLuong*donGia;
}

istream& operator>>(istream &cin,MatHang &mh)
{
    cout<<"Nhap vao ten mat hang: ";scanf(" ");
    cin.get(mh.tenMatHang,sizeof(mh.tenMatHang));
    cout<<"Nhap vao so luong: ";cin>>mh.soLuong;
    cout<<"Nhap vao don gia: ";cin>>mh.donGia;
    return cin;
}

ostream& operator<<(ostream &cout,MatHang &mh)
{
    cout<<"Ten mat hang hang: "<<mh.tenMatHang;
    cout<<"\nSo luong: "<<mh.soLuong;
    printf("\nDon gia: %0.1f",mh.donGia);
    printf("\nThanh tien: %0.1f",mh.soLuong*mh.donGia);
    return cout;
}
