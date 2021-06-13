//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 32(lthdtbai32.cpp): Cho tệp văn bản chứa dãy số nguyên "lthdtbai32-daysonguyen.txt",
trên tệp không có thông tin về số phần tử của dãy số. Đọc dãy số từ tệp văn bản,
lưu dãy số trong danh sách liên kết đơn theo đúng thứ tự trên tệp. Đưa dãy số trong DSLKD ra màn hình.
Tìm xem trong dãy số có phần tử nào bằng x không. Xóa một phần tử có giá trị bằng x.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class SList
{
    private:
	struct node
	{
	    int infor;
	    node *link;
	}*F;
    
    public:
	SList();
	~SList();
	void lastInsert(int x);
	void display();
	bool search(int x);
	void deleteX(int);
};

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
SList::SList():F(NULL)
{

}

SList::~SList()
{
    while(F)
    {
	node *P=F;
	F=F->link;
	delete P;
    }
}

void SList::lastInsert(int x)
{
    //1.Tao nut moi chua x
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //2.Noi nut moi vao cuoi DSLKD
    if(F==NULL) F=N;
    else
    {
	//Tim den nut cuoi last
	node *last=F;
	while(last->link) last = last->link;
	
	//Noi nut moi vao sau nut cuoi
	last->link = N;
    }
}

void SList::display()
{
    node *P=F;
    while(P)
    {
	cout<<P->infor<<" ";
	P=P->link;
    }
}

bool SList::search(int x)
{
    node *P=F;

    //Tim nut co phan tu bang x
    while(P)
    {
	if(P->infor==x) return 1;
	else P=P->link;
    }

    //Khong tim thay
    return 0;
}

void SList::deleteX(int x)
{

}
