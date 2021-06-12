//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE: Tính tổng hai số phức

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SoPhuc
{
    private:
	float a,b;

    public:
	void nhap();
	void hien();
	SoPhuc cong(SoPhuc &p2);
};
//===Chuong trinh chinh===
int main()
{
    SoPhuc tong;
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void SoPhuc::nhap()
{
    cout<<"Nhap vao phan thuc: ";
    cin>>a;
    cout<<"Nhap vao phan ao: ";
    cin>>b;
}

void SoPhuc::hien()
{
    if(b>=0) cout<<a<<" + j"<<b;
    else cout<<a<<" - j"<<-b;
}

SoPhuc SoPhuc::cong(SoPhuc &p2)
{
    SoPhuc tong;
    return tong;
}
