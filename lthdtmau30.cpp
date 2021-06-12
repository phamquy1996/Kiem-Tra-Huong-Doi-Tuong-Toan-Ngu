//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Bài 30(lthdtbai30.cpp): Đọc vào một dãy số nguyên từ tệp văn bản, trong đó có cả số dương và số âm.
Sử dụng hàng đợi lưu trữ kế tiếp theo kiểu quay vòng để tách, đưa ra màn hình đồng thời
ghi ra tệp văn bản dãy các số dương và dãy các số âm.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop hang doi
class Queue
{
    private:
	enum {size=50};
	int Q[size];
	int F,R;

    public:
	Queue();
	void insert(int x);
	int remove();
	bool isEmpty();
};

//===chuong trinh chinh===
int main()
{

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
Queue::Queue():F(-1),R(-1)
{

}

void Queue::insert(int x)
{
    //1.Kiem tra day
    if(F==-1 && R==size-1 || R+1==F)
    {
	cout<<"Hang doi da day!";
	return;
    }

    //2.Tang R len 1
    if(R == -1) F = R = 0;
    else if(R = size-1) R=0;
    else R++;

    //3.Dua x vao hang doi tai vi tri R
    Q[R] = x;
}

int Queue::remove()
{

}

bool Queue::isEmpty()
{
    return F == -1;
}


