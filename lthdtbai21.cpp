//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
 Bài 21(lthdtbai21.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận Amxn để trong tệp văn bản 'matran-A.txt', ma trận Bmxn để trong tệp văn bản 'matran-B.txt'. Đưa các ma trận ra màn hình theo định dạng hàng, cột.
*/
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

//Khai bao lop
class MaTran
{
    private:
	int m,n;
	enum {size=10};
	int a[size][size];

    public:
	MaTran();
	MaTran operator+(const MaTran &mt2);
	friend ifstream& operator>>(ifstream &fin,MaTran &mt);
	friend ostream& operator<<(ostream &cout,MaTran &mt);
};

//===Chuong trinh chinh===
int main()
{
    MaTran A,B,C;
    ifstream finA("matran-A.txt");
    ifstream finB("matran-B.txt");
    finA>>A;
    finB>>B;
    C = A + B;
    cout<<"Ma tran A:\n"<<A;
    cout<<"\n\nMa tran B:\n"<<B;
    cout<<"\n\nMa tran C = A + B:\n"<<C;
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
MaTran::MaTran():m(0),n(0)
{

}

MaTran MaTran::operator+(const MaTran &mt2)
{
    MaTran tg;
    if(m==mt2.m && n==mt2.n)
    {
	 tg.m = m;
	 tg.n = n;
	     for(int i=0;i<m;i++)
		 for(int j=0;j<n;j++)
		    tg.a[i][j] = a[i][j] + mt2.a[i][j];
    }
    else cout<<"Hai ma tran khong cung kich thuoc, khong cong duoc.";
    return tg;
}

ifstream& operator>>(ifstream &fin,MaTran &mt)
{
    fin>>mt.m>>mt.n;
    for(int i=0;i<mt.m;i++)
	for(int j=0;j<mt.m;j++)
	    fin>>mt.a[i][j];   
    return fin;
}

ostream& operator<<(ostream &cout,MaTran &mt)
{
    for(int i=0;i<mt.m;i++)
    {
	 for(int j=0;j<mt.n;j++) printf("%6d",mt.a[i][j]);
	 cout<<endl;
    }
    return cout;
}
