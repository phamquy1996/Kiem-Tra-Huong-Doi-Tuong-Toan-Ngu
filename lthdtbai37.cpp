//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 37(lthdtbai37.cpp): Tạo lớp đối tượng xâu ký tự có các đặc điểm giống như xâu ký tự
trong Pascal: Có thể khởi tạo đối tượng xâu bằng một hằng xâu; có thể gán hằng xâu hoặc
đối tượng xâu cho đối tượng xâu; có thể dùng phép toán + để nối xâu; có thể dùng các
phép toán so sánh để so sánh xâu; có thể dùng cin và cout để nhập vào và đưa ra đối tượng xâu. 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai bao lop xau ky tu
class XString
{
    private:
	enum {SIZE=256};
	char str[SIZE]; //Khai bao bien xau ky tu thong thuong

    public:
	XString(); //Ham tao khong doi so
	XString(const char *s); //Ham tao 1 doi so
	XString operator+(const XString &s2);
	bool operator>(const XString &s2);
	bool operator>=(const XString &s2);

	//Ham ban
	friend void operator>>(istream &cin,XString &s);
	friend void operator<<(ostream &cout,XString &s);
};

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
XString::XString() //Ham tao khong doi so
{

}

XString::XString(const char *s) //Ham tao 1 doi so
{

}

XString XString::operator+(const XString &s2)
{

}

bool XString::operator>(const XString &s2)
{

}

bool XString::operator>=(const XString &s2)
{

}


