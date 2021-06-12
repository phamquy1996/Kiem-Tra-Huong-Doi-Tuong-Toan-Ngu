//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
lthdtbai27.cpp): Viết chương trình nhập vào danh sách n sinh viên, mỗi sinh viên có thông tin về mã sinh viên, tên và điểm tbc. Mã SV là các số nguyên được lấy tự động có giá trị từ 11 trở đi.
Đưa ra màn hình số lượng (không dùng n) và danh sách sinh viên đã nhập. Yêu cầu trong chương trình có sử dụng biến tĩnh và hàm tĩnh; sử dụng mảng đối tượng động. 
*/

#include<iostream>
#include<stdio.h>

using namespace std;
//Khai bao lop
class SinhVien{
    private:
	char ten[15];
	float diemTB;
	int maSV;
	static int stt;

    public:
	void nhap();
	void hienthi();
	static int laySL();
};

//Dinh nghia bien cua lop
int SinhVien::stt=10;

//===Chuong trinh chinh===
int main()
{
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===

void SinhVien::nhap(){
    maSV = ++stt;
    cout<<"Ten: ";
    scanf(" ");cin.get(ten,sizeof(ten));   
    cout<<"Diem TB: ";
    cin>>diemTB;
}

void SinhVien::hienthi(){
    cout<<"Ten: "<<ten<<endl;
    cout<<"Diem TB: "<<diemTB<<endl;
}

int SinhVien::laySL()
{
    return stt-10;
}
