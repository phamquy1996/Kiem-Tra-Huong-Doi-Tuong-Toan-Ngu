//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
Bài 29(lthdtbai29.cpp): Nhập vào một số nguyên dương, đưa ra số hex tương ứng.
Y/c trong chương trình có sử dụng ngăn xếp để chuyển từ số thập phân sang hex.
Ngăn xếp sử dụng cấu trúc lưu trữ phân tán.
*/

#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao lop
class Stack{
    private:
	struct node
	{
	    char infor;
	    node *link;
	}*T;

    public:
	Stack();
	~Stack();
	void push(char x);
	char pop();
	bool isEmpty();
};
//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
Stack::Stack():T(NULL)
{

}

Stack::~Stack()
{

}

void Stack::push(char x)
{
    node *N = new node;
}

char Stack::pop()
{

}

bool Stack::isEmpty()
{
    return T==NULL;
}

