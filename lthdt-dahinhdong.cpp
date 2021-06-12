//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
 Tính diện tích các hình: Hình tam giác biết 3 cạnh a,b,c; hình chữ nhật biết 2 cạnh a,b; hình tròn biết bán kính r; hình trụ biết bán kính r và chiều cao :h.
 Biết rằng hình trụ là một loại hình tròn có bán kính r được kéo dài với chiều cao h.
 Nhập vào một số hình trong đó cả cả hình tam giác, chữ nhật, tròn, trụ. Đưa ra diện tích các hình đã nhập. 
 Yêu cầu cài đặt đa hình động.
 */

#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop

//Lop  Hinh
class Hinh
{
    private:

    public:
    	virtual void nhap()=0;
	virtual float tinhDT()=0;
};

//Lop Hinh Tron
class HinhTron:public Hinh
{
    private:
	float r;

    public:
	void nhap();
	float tinhDT();
	float tinhCV();
};

//Lop Hinh Tru
class HinhTru:public HinhTron
{
    private:
	float h;

    public:
	void nhap();
	float tinhDT();
};

//Lop Hinh CN
class HinhCN:public Hinh
{
    private:
	float a,b;

    public:
	void nhap();
	float tinhDT();
};

//Lop HinhTG
class HinhTG:public Hinh
{
    private:
	float a,b,c;

    public:
	void nhap();
	float tinhDT();
};

//===Chuong trinh chinh===
int main()
{
    int n=0;
 
    Hinh *dshinh[100];
    char traloi1,traloi2;
    do
    {
	cout<<endl;
	cout<<"Ban nhap hinh nao(1-Chu Nhat,2-Tam Giac,3-Tron,4-Tru)? ";
	cin>>traloi1;
	switch(traloi1)
	{
	    case '1':
		dshinh[n]=new HinhCN;
		break;
	    case '2':
		dshinh[n]=new HinhTG;
		break;
	    case '3':
		dshinh[n]=new HinhTron;
		break;
	    case '4':
		dshinh[n]=new HinhTru;
		break;
	    default:
		dshinh[n]=new HinhCN;
		break;
	}

	dshinh[n++]->nhap(); 
	cout<<"Co nhap nua khong? ";
	cin>>traloi2;
    }
    while(traloi2=='c'||traloi2=='C');

    cout<<"\nDien tich cac hinh la:";

    for(int i=0;i<n;i++)
    {
	cout<<"\nHinh thu"<<i+1<<":\n";
	cout<<"\n\tDien tich la: "<<dshinh[i]->tinhDT(); 
	cout<<endl;
    }
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===

//Ham lop hinh CN
void HinhCN::nhap()
{
    cout<<"Nhap vao 2 canh hinh chu nhat";
    cin>>a>>b;
}

float HinhCN::tinhDT()
{
    return a*b;
}

//Ham thanh vien lop hinh TG
void HinhTG::nhap()
{
    do
    {
	cout<<"Nhap 3 canh tam giac:";
	cin>>a>>b>>c;
	if(a+b<=c||a+c<=b||b+c<=a)
	    cout<<"3 so da nhap khong phai 3 canh tam giac. Nhap lai\n";
    }
    while(a+b<=c||a+c<=b||b+c<=a);

}

float HinhTG::tinhDT()
{
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

// Ham lop Hinh Tron
void HinhTron::nhap()
{
    cout<<"Nhap vao ban kinh r:";
    cin>>r;
}

float HinhTron::tinhDT()
{
    return 3.14*r*r;
}

float HinhTron::tinhCV()
{
    return 2*3.14*r;
}
//Ham hinh tru
void HinhTru::nhap()
{
    HinhTron::nhap();
    cout<<"Nhap vao chieu cao h: ";
    cin>>h;
}

float HinhTru::tinhDT()
{
    return 2*HinhTron::tinhDT() + HinhTron::tinhCV()*h; 
}
