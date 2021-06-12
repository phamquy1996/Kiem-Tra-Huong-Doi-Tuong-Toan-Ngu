//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
 Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c có thể nhập vào từ bàn phím hoặc từ tệp văn bản.
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<fstream>

using namespace std;
//Khai bao lop
class HinhTG
{
    private:
	float a,b,c;

    public:
	void Nhap();
	void Hien();
	float TinhCV();
	float TinhDT();
};
//===Chuong trinh chinh===
int main()
{
    ofstream fin("tamgiac.txt");
    for(int a=1; a<=3;a++)
    {
	fin<<a;
    }

    fin.close();
    HinhTG h;

    h.Nhap();
    h.Hien();
    cout<<"Chu vi HTG la:"<<h.TinhCV()<<endl;
    cout<<"Dien tich HTG la:"<<h.TinhDT();
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

void HinhTG::Hien()
{
    cout<<"Chieu dai 3 canh HTG la:"<<a<<","<<b<<","<<c<<endl;
}

void HinhTG::Nhap()
{
    
    do
    {
	cout<<"Nhap vao 3 canh cua tam giac:";
	cin>>a>>b>>c;
	if(a+b<=c || b+c<=a || a+c<=b)
	{
	    cout<<"3 canh tam giac da nhap khong hop le, hay nhap lai!";
	}
    }
    while(a+b<c || b+c<=a || a+c<=b);
}

float HinhTG::TinhDT()
{
    float p = HinhTG::TinhCV() / 2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float HinhTG::TinhCV()
{
    return a+b+c;
}
