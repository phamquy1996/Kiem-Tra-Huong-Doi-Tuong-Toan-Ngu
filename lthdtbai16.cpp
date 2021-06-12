//Ho va ten: Pham Duc Quy
//MaSV: 591879
//Lop: K59THA
//DE:
/*
 Bài 16(lthdtbai16.cpp): Đọc vào bán kính và màu nền (Xanh, Đỏ, Tím, Vàng) 
 của n hình tròn
 từ tệp văn bản "hinhtron.txt". Đưa ra màn hình bán kính, màu nền, diện tích và chu vi
 của các hình tròn. Tính tổng diện tích và chu vi của n hình tròn.
 Đếm số lượng hình tròn có nền màu Xanh, Đỏ, Tím, Vàng.
*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;

//Khai bao lop
class HinhTron
{
    private:
	float r;
	char mauNen[7];

    public:
	void thietLapR(float r);
	void thietLapMauNen(const char *mauNen);
	void hien();
	float tinhDT();
	float tinhCV();
	int layMaMau();
};

//===Chuong trinh chinh===
int main()
{
    ifstream fin("hinhtron.txt");
    float tongCV=0,tongDT=0,r;
    int demMau[4]={0}, kt=0;
    char tenMau[4][7]={"Xanh","Đỏ","Tím","Vàng"};

    int n;
    fin>>n;
    
    HinhTron *hinhTron = new HinhTron[n];
   
    for(int i=0;i<n;i++)
    {

    }
    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
void HinhTron::thietLapR(float r)
{
    this->r = r;
}

void HinhTron::thietLapMauNen(const char *mauNen)
{
    strcpy(this->mauNen,mauNen);
}

void HinhTron::hien()
{
    printf("Bán kính: %.1f\t Màu nền: %s\t Chu vi: %.1f\t Diện tích:%.1f\n",r,mauNen,3.14*r*r,2*3.14*r);
}

float HinhTron::tinhDT()
{
    return 3.14*r*r;
}

float HinhTron::tinhCV()
{
    return 2*3.14*r*r;
}

int HinhTron::layMaMau()
{
    if(strcasecmp(mauNen, "Xanh")==0) return 1;
    if(strcasecmp(mauNen, "Đỏ")==0) return 2;
    if(strcasecmp(mauNen, "Tím")==0) return 3;
    if(strcasecmp(mauNen, "Vàng")==0) return 4;
}

