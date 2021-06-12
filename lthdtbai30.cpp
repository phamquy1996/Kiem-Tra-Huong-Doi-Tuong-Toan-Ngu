//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 30(lthdtbai30.cpp): Đọc vào một dãy số nguyên từ tệp văn bản, trong đó có cả số dương và số âm.
Sử dụng hàng đợi lưu trữ kế tiếp theo kiểu quay vòng để tách, đưa ra màn hình đồng thời
ghi ra tệp văn bản dãy các số dương và dãy các số âm.
*/
#include<iostream>
#include<stdio.h>

using namespace std;
class CQueue
{
    private:
	enum {SIZE=100};
	int Q[SIZE];
	int F,R;
    public:
	CQueue(); 
	void Insert(int x);
	int Delete();
	bool Empty();
};

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
CQueue::CQueue():F(-1),R(-1) //Ham tao khong doi so
{

}

void CQueue::Insert(int x)
{

}

int CQueue::Delete()
{

}

bool CQueue::Empty()
{
    if(F==-1) return 1;

    return 0;
}
