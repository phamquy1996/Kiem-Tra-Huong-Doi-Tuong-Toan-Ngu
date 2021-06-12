//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:

#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao lop
class HinhCN
{
    private:
	float a,b;
    public:
	void Nhap();
	void Hien();
	float TinhCV();
	float TinhDT();
};

//===Chuong trinh chinh===
int main()
{
    //Tao doi tuong HCN 
    HinhCN h;

    h.Nhap();
    h.Hien();
    cout<<"Chu vi HCN la:"<<h.TinhCV()<<endl;
    cout<<"Dien tich HCN là:"<<h.TinhDT();
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void HinhCN::Hien()
{
    cout<<"Chieu dai 2 canh HCN la:"<<a<<" va "<<b<<endl;
}

void HinhCN::Nhap()
{
    cout<<"Nhap vao 2 canh HCN:";
    cin>>a>>b;
}

float HinhCN::TinhCV()
{
    return (a+b)*2;
}

float HinhCN::TinhDT()
{
    return a*b;
}
