//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB. 
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Diem
{
     private:
	 float x,y,s;
     public:
	 Diem operator+(Diem &p2);
	 friend istream& operator>>(istream &cin,Diem &p);
	 friend ostream& operator<<(ostream &cout,Diem &p);
};

//===Chuong trinh chinh===
int main()
{
    Diem a,b,kc;

    cout<<"Nhap vao diem A:\n";
    cin>>a;
    cout<<"Nhap vao diem B:\n";
    cin>>b;
    
    kc = b;
    cout<<"Diem A = "<<a<<endl;
    cout<<"Diem B = "<<b<<endl;
    cout<<"khoang cach = "<<kc; 
    cout<<endl;
    return 0;
}

//===Dinh nghia ham==
istream& operator>>(istream &cin,Diem &p)
{
    cout<<"Nhap vao x: ";cin>>p.x;
    cout<<"Nhap vao y: ";cin>>p.y;
    return cin;
}

ostream& operator<<(ostream &cout,Diem &p)
{
    cout<<p.x<<endl;
    cout<<p.y;
    return cout;
}

Diem Diem::operator+(Diem &p2)
{
    Diem kc;
    kc.s = sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y));
    return kc;
}

