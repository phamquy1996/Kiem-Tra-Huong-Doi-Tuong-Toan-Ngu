//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/* 
 Viết chương trình tính thể tích và diện tích bề mặt hình trụ có bán kính r
 và chiều cao h. Biết rằng hình trụ là một loại hình tròn có bán kính r được kéo dài với chiều cao h
*/
#include<iostream>
#include<stdio.h>
#define PI 3.14159
using namespace std;
//Khai bao lop
class HinhTru
{
    private:
	float r,h;
    public:
	void nhap();
	float tinhDT();
	float tinhTT();
};
//===Chuong trinh chinh===
int main()
{
    HinhTru h;
    h.nhap();
    cout<<"Dien tich hinh tru la:"<<h.tinhDT()<<endl;
    cout<<"The tich hinh tru la:"<<h.tinhTT();
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void HinhTru::nhap()
{
    cout<<"Nhap vao ban kinh va chieu cao hinh tru:";
    cin>>r>>h;
}
float HinhTru::tinhDT()
{
    return 4*PI*r*r;
}
float HinhTru::tinhTT()
{
    return (4/3)*PI*r*r*r;
}
