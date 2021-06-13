//Ho ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//De:
#include<iostream>
#include<stdio.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    int number;
     do
     {
	 printf("\n Nhap vao so x = ");
	 scanf("%d", &number);
     }
     while(number < 0);
    printf("\n Ma hexa cua %d la : 0x%x", number, number);
    cout<<endl;
    return 0;
}
//===dinh nghia ham===
