//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 25(lthdtbai25.cpp): Viết chương trình nhập vào một thời gian có giờ và phút. Tính và đưa ra màn hình thời gian sau n phút nhập vào từ bàn phím.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class Time
{
    private:
	int h,mm;

    public:
	Time();

	Time operator+(Time &p2);
	friend istream& operator>>(istream &cin,Time &mh);
	friend ostream& operator<<(ostream &cout,Time &mh);
};

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
Time::Time():h(0),mm(0)
{

}

istream& operator>>(istream &cin,Time &t)
{
   // do
   // {
	cout<<"Nhap vao so gio: ";cin>>t.h;
	cout<<"Nhap vao so phut: ";cin>>t.mm;
	//if(t.h>=24||t.mm>=60) cout<<"Ban da nhap sai. Vui long nhap lai!"<<endl;
   // }
   // while(t.h>=24||t.mm>=60);

    return cin;
}

ostream& operator<<(ostream &cout,Time &t)
{
    cout<<t.h<<":"<<t.mm;

    return cout;
}

Time Time::operator+(Time &p2)
{
    Time tg;
    if(p2.mm > 60)
    {
	tg.h = h + p2.mm/60;
	tg.mm = mm + p2.mm%60;
    }
    return tg;
}
