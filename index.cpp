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

//Khai bao lop hinh
class Hinh
{
    private:

    public:
    	virtual void nhap()=0;
	virtual float tinhDT()=0;
};

//Khai bao lop Hinh TG
class HinhTG:public Hinh
{
    private:
	float a,b,c;

    public:
	void nhap();
	float tinhDT();
};

//Khai bao lop Hinh CN
class HinhCN:public Hinh
{
    private:
	float a,b;

    public:
	void nhap();
	float tinhDT();
};

//Khai bao lop Hinh Tron
class HinhTron:public Hinh
{
    private:
	float r;

    public:
	void nhap();
	float tinhDT();
	float tinhCV();
};

//Khai bao lop Hinh Tru
class HinhTru:public HinhTron
{
    private:
	float h;

    public:
	void nhap();
	float tinhDT();
};

//===Chuong trinh chinh===
int main()
{
    //Khai bao mang con tro lop co so Hinh
    Hinh *dshinh[100];
    
    //Khai bao bien
    int n=0;
    char traloi1,traloi2;

    //Nhap
    do
    {
	cout<<"\nBan nhap hinh nao (1-Chu nhat,2-Tam giac,3-Tron,4-Tru)? ";
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
	}

	//Dung da hinh dong de nhap kich thuoc hinh da chon
	dshinh[n++]->nhap();
	
	cout<<"Co nhap nua khong (c/k)? ";
	cin>>traloi2;
    }
    while(traloi2=='c'||traloi2=='C');

    cout<<"\nDien tich cac hinh la:";
    for(int i=0;i<n;i++)
	printf("\nHinh thu %d co dien tich la: %0.1f",i+1,dshinh[i]->tinhDT());//Da hinh dong de tinh dien tich hinh cu the

    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
//Ham thanh vien lop hinh TG
void HinhTG::nhap()
{
    do
    {
	cout<<"Nhap 3 canh tam giac: ";
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

//Ham lop hinh CN
void HinhCN::nhap()
{
    cout<<"Nhap vao 2 canh hinh chu nhat: ";
    cin>>a>>b;
}

float HinhCN::tinhDT()
{
    return a*b;
}

// Ham lop Hinh Tron
void HinhTron::nhap()
{
    cout<<"Nhap vao ban kinh r: ";
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


//Ho Ten: Tran Thi Le Thu
//MSV:621081
//Lop: K62CNPMP
//De:
/*
 Tính diện tích và chu vi hình chữ nhật có 2 cạnh a, b.
 */
#include<stdio.h>
#include<iostream>

using namespace std;

//Khai bao lop
class HinhCN
{
    private:
	float a,b;

    public:
	void nhap();
	float tinhDT();
	float tinhCV();
};

//===chuong trinh chinh===
int main ()
{
    //Tao 1 doi tuong hinh chu nhat
    HinhCN hcn;
    
    //Tuong tac voi doi tuong hc
    hcn.nhap();

    //dua ra dien tich va chu vi
    cout<<"Dien tich hinh chu nhat la: "<<hcn.tinhDT();
    cout<<"\nChu vi hinh chu nhat la: "<<hcn.tinhCV();

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void HinhCN::nhap()
{
    cout<<"Nhap vao 2 canh a va b: ";
    cin>>a>>b;
}

float HinhCN::tinhDT()
{
    return a*b;
}

float HinhCN::tinhCV()
{
    return (a+b)*2;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Thời điểm là một loại ngày tháng và cũng là một loại thời gian nhưng có thêm địa điểm.
Ngày tháng có ngày, tháng, năm. Thời gian có giờ và phút.
Nhập vào một thời điểm, đưa ra thời điểm đó ở dạng Địa điểm, dd/mm/yy - h:mm.
Y/c viết hàm tạo không có đối số và có đối số cho tất cả các lớp.
Ví dụ: Hà Nội, 30/09/19 – 14:27
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai bao lop ngay thang
class NgayThang
{
    private:
	int ngay,thang,nam;

    public:
	NgayThang();
	NgayThang(int ngay,int thang,int nam);
	void nhap();
	void hien();
};

//Khai bao lop thoi gian
class ThoiGian
{
    private:
	int gio,phut;

    public:
	ThoiGian();
	ThoiGian(int gio,int phut);
	void nhap();
	void hien();
};

//Khai bao lop thoi diam
class ThoiDiem:public NgayThang,public ThoiGian
{
    private:
	char diaDiem[31];

    public:
	ThoiDiem();
	ThoiDiem(int ngay,int thang,int nam,int gio,int phut,const char *diaDiem);
	void nhap();
	void hien();
};

//===chuong trinh chinh===
int main()
{
    //Tao 1 doi tuong thoi diem
    ThoiDiem td;

    //Tuong tac    cout<<"Nhap vao mot thoi diem:\b";
    cout<<"Nhap vao mot thoi diem:\n";
    td.nhap();

    cout<<"\nThoi diem da nhap la:\n";
    td.hien();

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
//Ham cua lop ngay thang
NgayThang::NgayThang():ngay(0),thang(0),nam(0)
{

}

NgayThang::NgayThang(int ngay,int thang,int nam):ngay(ngay),thang(thang),nam(nam)
{

}

void NgayThang::nhap()
{
    char kt;

    cout<<"Nhap ngay (dang dd/mm/yyyy): ";
    cin>>ngay>>kt>>thang>>kt>>nam;
}

void NgayThang::hien()
{
    printf("%02d/%02d/%d",ngay,thang,nam);
}

//Ham cua lop thoi gian
ThoiGian::ThoiGian():gio(0),phut(0)
{

}

ThoiGian::ThoiGian(int gio,int phut):gio(gio),phut(phut)
{

}

void ThoiGian::nhap()
{
    char kt;

    cout<<"Nhap thoi gian (dang h:mm): ";
    cin>>gio>>kt>>phut;
}

void ThoiGian::hien()
{
    printf("%d:%02d",gio,phut);
}

//Ham lop thoi diem
ThoiDiem::ThoiDiem():NgayThang(),ThoiGian()
{
    //Khoi tao xau rong cho bien diaDiem
    strcpy(diaDiem,"");
}

ThoiDiem::ThoiDiem(int ngay,int thang,int nam,int gio,int phut,const char *diaDiem):NgayThang(ngay,thang,nam),ThoiGian(gio,phut)
{
    strcpy(this->diaDiem,diaDiem);
}

void ThoiDiem::nhap()
{
    NgayThang::nhap();
    ThoiGian::nhap();
    cout<<"Nhap dia diem: ";
    scanf(" ");cin.get(diaDiem,sizeof(diaDiem));
}

void ThoiDiem::hien()
{
    cout<<diaDiem<<", ";
    NgayThang::hien();
    cout<<" - ";
    ThoiGian::hien();
}


//Ho va ten: Nguyen Thi Quynh
//MaSV: 611304
//Lop: K61THA
//De:Viet chuong trinh thinh the tich va dien tich be mat cua hinh tru co ban kinh r va chieu cao h. Biet rang hinh tru la mot loai hinh tron co ban kinh r duoc keo dai voi chieu cao h 

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop hinh tron
class HinhTron
{
    private: 
	float r;

    public:
	void nhap();
	float tinhDT();
	float tinhCV();
};

//Khai bao lop hinh tru ke thua tu lop hinh tron
class HinhTru:public HinhTron
{
    private:
	float h;

    public:
	void nhap();
	float tinhDT();
	float tinhTT();
};

//===chuong trinh chinh===
int main()
{
    //Tao 1 doi tuong hinh tru
    HinhTru h;

    cout<<"Nhap vao kich thuoc hinh tru:\n";
    h.nhap();

    printf("Dien tich hinh tru la: %0.1f",h.tinhDT());
    printf("\nThe tich hinh tru la: %0.1f",h.tinhTT());

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
void HinhTron::nhap()
{
    cout<<"Nhap vao ban kinh r: ";
    cin>>r;
}

float HinhTron::tinhDT()
{
    return 3.14 * r * r;
}

float HinhTron::tinhCV()
{
    return 2 * 3.14 * r;
}

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

float HinhTru::tinhTT()
{
    return HinhTron::tinhDT()*h; 
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Bài 15(lthdtbai15.cpp): Tính diện tích và chu vi hình tam giác có 3 cạnh a,b,c. Ba cạnh a,b,c có thể nhập vào
từ bàn phím hoặc từ tệp văn bản.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop
class HinhTG
{
    private:
	float a,b,c;

    public:
	void nhap();
	void docTep(const char *tenTep);
	float tinhDT();
	float tinhCV();
};

//===chuong trinh chinh===
int main()
{
    //Tao 1 doi tuong tam giac
    HinhTG htg;

    //Tuong tac
    htg.nhap();

    printf("Dien tich tam giac la: %0.1f",htg.tinhDT());
    printf("\nChu vi tam giac la: %0.1f",htg.tinhCV());

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void HinhTG::nhap()
{
    do
    {
	cout<<"Nhap vao 3 canh cua tam giac: ";
	cin>>a>>b>>c;

	if(a+b<=c || a+c<=b || b+c<=a)
	    cout<<"3 so vua nhap khong phai 3 canh tam giac. Nhap lai!\n";
    }
    while(a+b<=c || a+c<=b || b+c<=a);
}

void HinhTG::docTep(const char *tenTep)
{
    //Khai bao tep vao
    ifstream fin(tenTep);

    //Doc vao 3 canh tam giac tu tep
    fin>>a>>b>>c;
 
    //Kiem tra
    if(a+b<=c || a+c<=b || b+c<=a)
	cout<<"3 so tren tep khong phai 3 canh tam giac.\n";
}

float HinhTG::tinhDT()
{
    //Neu 3 canh ko hop le
    if(a+b<=c || a+c<=b || b+c<=a) return 0;

    //Neu 3 canh hop le
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float HinhTG::tinhCV()
{
    //Neu 3 canh ko hop le
    if(a+b<=c || a+c<=b || b+c<=a) return 0;

    //Neu 3 canh hop le
    return a+b+c; 
}


//Ho ten: Dao Tat Tung
//MaSV: 642231
//Lop: K64CNTTA
//De:
/*
Bài 16(lthdtbai16.cpp): Đọc vào bán kính và màu nền (Xanh, Đỏ, Tím, Vàng) của n hình tròn
từ tệp văn bản "hinhtron.txt". Đưa ra màn hình bán kính, màu nền, diện tích và chu vi
của các hình tròn. Tính tổng diện tích và chu vi của n hình tròn.
Đếm số lượng hình tròn có nền màu Xanh, Đỏ, Tím, Vàng.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai bao lop hinh tron
class HinhTron
{
    private:
	float r;
	char mauNen[7];

    public:
	void thietLapR(float r);
	void thietLapMauNen(const char *mauNen);
	void hienThi();
	float tinhDT();
	float tinhCV();
	int layMaMau();
};

//===chuong trinh chinh===
int main()
{
    //Tao doi tuong tep doc vao
    ifstream fin("hinhtron.txt");

    //Khai bao bien
    int n;
    float r,tongDT=0,tongCV=0;
    char mauNen[7];
    int dem[4]={0};

    //Doc so luong hinh tron tu tep
    fin>>n;

    //Tao mang dong n doi tuong hinh tron de chua du lieu cua n hinh tron doc vao tu tep
    HinhTron *ds = new HinhTron[n];

    //Doc du lieu n hinh tron tu tep vao doi tuong hinh tron
    for(int i=0;i<n;i++)
    {
	fin>>r>>mauNen;

	ds[i].thietLapR(r);
	ds[i].thietLapMauNen(mauNen);
    }

    //Tinh tong dt, cv cua n hinh tron; dem hinh tron theo mau
    for(int i=0;i<n;i++)
    {
	tongDT += ds[i].tinhDT();
	tongCV += ds[i].tinhCV();
	dem[ds[i].layMaMau()]++;
    }

    //Dua ra
    cout<<"Danh sach cac hinh tron la:\n";
    for(int i=0;i<n;i++)
    {
	printf("Hinh tron thu %d:\n",i+1);
	ds[i].hienThi();
	cout<<"\n\n";
    }

    printf("\nTong dien tich cua %d hinh tron la: %0.1f",n,tongDT);
    printf("\nTong chu vi cua %d hinh tron la: %0.1f",n,tongCV);
    cout<<"\nSo hinh tron mau Xanh: "<<dem[0];
    cout<<"\nSo hinh tron mau Đỏ: "<<dem[1];
    cout<<"\nSo hinh tron mau Tím: "<<dem[2];
    cout<<"\nSo hinh tron mau Vàng: "<<dem[3];

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void HinhTron::thietLapR(float r)
{
    this->r = r;
}

void HinhTron::thietLapMauNen(const char *mauNen)
{
    strcpy(this->mauNen,mauNen);
}

void HinhTron::hienThi()
{
    printf("Hinh tron co:");
    printf("\n\tBan kinh: %0.1f",r);
    printf("\n\tMau nen: %s",mauNen);
    printf("\n\tDien tich: %0.1f",3.14*r*r);
    printf("\n\tChu vi: %0.1f",2*3.14*r);
}

float HinhTron::tinhDT()
{
    return 3.14*r*r;
}

float HinhTron::tinhCV()
{
    return 2*3.14*r;
}

int HinhTron::layMaMau()
{
    if(strcasecmp(mauNen,"Xanh")==0) return 0;
    if(strcasecmp(mauNen,"Đỏ")==0) return 1;
    if(strcasecmp(mauNen,"Tím")==0) return 2;
    if(strcasecmp(mauNen,"Vàng")==0) return 3;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop diem trong mat phang
class Diem
{
    private:
	float x,y;

    public:
	Diem();
	Diem(float x,float y);
	float tinhKC(const Diem &D2);

	//Ham ban
	friend istream& operator>>(istream &cin,Diem &D);
	friend ostream& operator<<(ostream &cout,Diem &D);
};

//===chuong trinh chinh===
int main()
{
    //Tao 2 doi tuong diem A, B
    Diem A,B;

    //Nhap toa do
    cout<<"Nhap toa do diem A:\n";
    cin>>A;
    cout<<"Nhap toa do diem B:\n";
    cin>>B;

    //Tinh khoang cach AB
    float kc = A.tinhKC(B);

    //Dua ra kq
    cout<<"\nDiem A"<<A;
    cout<<"\nDiem B"<<B;
    printf("\nKhoang cach AB = %0.1f",kc);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
Diem::Diem():x(0),y(0)
{

}

Diem::Diem(float x,float y):x(x),y(y)
{

}

float Diem::tinhKC(const Diem &D2)
{
    return sqrt((D2.x-x)*(D2.x-x) + (D2.y-y)*(D2.y-y));
}

//Ham ban, ham thong thuong, khong nam trong doi tuong
istream& operator>>(istream &cin,Diem &D)
{
    cout<<"Nhap toa do x y: ";
    cin>>D.x>>D.y;

    return cin;
}

ostream& operator<<(ostream &cout,Diem &D)
{
    printf("(%0.1f,%0.1f)",D.x,D.y);

    return cout;
}


//Hoten: Dao Thi Thu Thao
//MaSV: 611307
//Lop: K61QLTT
//De: 
/*
Bài 21(lthdtbai21.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận Amxn để trong
tệp văn bản 'matran-A.txt', ma trận Bmxn để trong tệp văn bản 'matran-B.txt'.
*/

#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

//Khai bao lop ma tran
class MaTran
{
    private:
	enum {size=10};
	int a[size][size];
	int m,n;

    public:
	MaTran();
	MaTran operator+(const MaTran &mt2);

	//Ham ban
	friend ifstream& operator>>(ifstream &fin,MaTran &mt);
	friend ostream& operator<<(ostream &cout,MaTran &mt);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong ma tran A,B,C
    MaTran A,B,C;

    //Tao doi tuong tep doc vao
    ifstream finA("matran-A.txt");
    ifstream finB("matran-B.txt");

    //Doc 2 ma tran A, B tu tep vao doi tuong ma tran
    finA>>A;
    finB>>B;

    //Cong 2 man tran
    C = A + B;

    //Dua ra cac ma tran
    cout<<"Ma tran A:\n"<<A;
    cout<<"\n\nMa tran B:\n"<<B;
    cout<<"\n\nMa tran C = A + B:\n"<<C;

    cout<<endl;
    return 0;
}

//===dinh nghia ham===
MaTran::MaTran():m(0),n(0)
{

}

MaTran MaTran::operator+(const MaTran &mt2)
{
    MaTran tong;

    //Kiem tra kich thuoc 2 ma tran
    if(m==mt2.m && n==mt2.n)
    {
	tong.m = m;
	tong.n = n;
	
	for(int i=0;i<tong.m;i++)
	    for(int j=0;j<tong.n;j++)
		tong.a[i][j]= a[i][j] + mt2.a[i][j];
    }
    else cout<<"\nHai ma tran khong cung kich thuoc, khong cong duoc.";

    return tong;
}

ifstream& operator>>(ifstream &fin,MaTran &mt)
{
    //Doc vao kich thuoc ma tran
    fin>>mt.m>>mt.n;

    //Doc vao cac phan tu cua ma tran
    for(int i=0;i<mt.m;i++)
	for(int j=0;j<mt.n;j++)
	    fin>>mt.a[i][j];

    return fin;
}

ostream& operator<<(ostream &cout,MaTran &mt)
{
    for(int i=0;i<mt.m;i++)
    {
	//Dua ra hang i
	for(int j=0;j<mt.n;j++)
	    printf("%6d",mt.a[i][j]);

	//Xuong dong
	cout<<endl;
    }

    return cout;
}


//Ho ten: Nguyen Quang Huy
//MaSv: 596550
//lop:K59THB
//De:
/*
Bài 23(lthdtbai23.cpp): Nhập vào một danh sách n mặt hàng; mỗi mặt hàng có tên hàng, số lượng, đơn giá.
Tính tổng tiền của n mặt hàng.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop
class MatHang
{
    private:
	char tenMatHang[30];
	int soLuong;
	float donGia;

    public:
	float tinhTien();
	
	//Ham ban
	friend istream& operator>>(istream &cin,MatHang &mh);
	friend ostream& operator<<(ostream &cout,MatHang &mh);	
};

//===Chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n;
    float tongTien=0;

    //Nhap n
    cout<<"Nhap vao so luong mat hang: ";cin>>n;

    //Tao mang dong n doi tuong mat hang de chua n mat hang
    MatHang *ds = new MatHang[n];

    //Nhap n mat hang va tinh tong tien cua n mat hang
    cout<<"Nhap thong tin cac mat hang:\n";
    for(int i=0;i<n;i++)
    {
	cout<<"Nhap mat hang thu "<<i+1<<":\n";
	cin>>ds[i];

	tongTien += ds[i].tinhTien();
    }

    //Dua ra
    cout<<"\nDanh sach cac mat hang da nhap la:";
    for(int i=0;i<n;i++)
    {
	cout<<"\nMat hang thu "<<i+1<<":";
	cout<<ds[i];

	cout<<"\n\n";
    }

    printf("\nTong tien cua %d mat hang la: %0.1f",n,tongTien);

    //Huy mang dong cac doi tuong
    delete [] ds;

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
float MatHang::tinhTien()
{
    return soLuong*donGia;
}

istream& operator>>(istream &cin,MatHang &mh)
{
    cout<<"Nhap vao ten mat hang: ";scanf(" ");cin.get(mh.tenMatHang,sizeof(mh.tenMatHang));
    cout<<"Nhap vao so luong: ";cin>>mh.soLuong;
    cout<<"Nhap vao don gia: ";cin>>mh.donGia;

    return cin;
}

ostream& operator<<(ostream &cout,MatHang &mh)
{
    cout<<"\n\tTen mat hang: "<<mh.tenMatHang;
    cout<<"\n\tSo luong: "<<mh.soLuong;
    printf("\n\tDon gia: %0.1f",mh.donGia);
    printf("\n\tThanh tien: %0.1f",mh.soLuong*mh.donGia);

    return cout;
}


//Ho ten: Pham Son Ha
//MaSV:
//Lop:
//De:
/*
Bài 25(lthdtbai25.cpp): Viết chương trình nhập vào một thời gian có giờ và phút.
Tính và đưa ra màn hình thời gian sau n phút nhập vào từ bàn phím.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai báo lớp
class ThoiGian
{
    private:
	int gio,phut;

    public:
	ThoiGian();
	ThoiGian operator+(int n);
	
	//Hàm bạn
	friend istream& operator>>(istream &cin,ThoiGian &t);
	friend ostream& operator<<(ostream &cout,ThoiGian &t);
};

//===Chuong trinh chinh===
int main()
{
    //Tao 2 doi tuong thoi gian
    ThoiGian bd,kt;
    
    //Khai bao bien
    int n;

    //Nhap du lieu
    cout<<"Nhap vao thoi gian bat dau ";cin>>bd;
    cout<<"Nhap vao so phut: ";cin>>n;

    //Tinh thoi gian sau n phut
    kt = bd + n;

    //Dua ra
    cout<<"\nThoi gian bat dau: "<<bd;
    cout<<"\nThoi gian sau "<<n<<" phut la: "<<kt;

    cout<<endl;
    return 0;
}

//===Dinh nghia ham===
ThoiGian::ThoiGian():gio(0),phut(0)
{

}

ThoiGian ThoiGian::operator+(int n)
{
    ThoiGian tg;

    tg.phut = phut + n;
    tg.gio = gio;

    //Dua tg.phut ve gia tri hop le: 0<=tg.phut<=59
    tg.gio += tg.phut/60;
    tg.phut = tg.phut%60;

    //Dua tg.gio ve dang hop le: 0<=tg<=23
    tg.gio = tg.gio%24;

    //Tra ve thoi gian sau khi cong voi n phut
    return tg;
}

istream& operator>>(istream &cin,ThoiGian &t)
{
    char kt;
    
    do
    {
	cout<<"(h:mm): ";
        cin>>t.gio>>kt>>t.phut;

	if(t.gio<0 || t.gio>23 || t.phut<0 || t.phut>59)
	    cout<<"Thoi gian nhap chua dung dang 24 gio, nhap lai.\n";
    }
    while(t.gio<0 || t.gio>23 || t.phut<0 || t.phut>59);

    return cin;
}

ostream& operator<<(ostream &cout,ThoiGian &t)
{
    printf("%d:%02d",t.gio,t.phut);

    return cout;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Bài 27(lthdtbai27.cpp): Viết chương trình nhập vào danh sách n sinh viên,
mỗi sinh viên có thông tin về mã sinh viên, tên và điểm tbc.
Mã SV là các số nguyên được lấy tự động có giá trị từ 11 trở đi.
Đưa ra màn hình số lượng (không dùng n) và danh sách sinh viên đã nhập.
Yêu cầu trong chương trình có sử dụng biến tĩnh và hàm tĩnh;
sử dụng mảng đối tượng động.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop sinh vien
class SinhVien
{
    private:
	int maSV;
	char hoTen[31];
	float diemTBC;

	//Bien cua lop
	static int stt;

    public:
	void nhap();
	void hien();

	//Ham cua lop
	static int laySL();
};

//Dinh nghia bien cua lop va khoi tao gia tri ban dau
int SinhVien::stt = 10;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int n;

    cout<<"Nhap vao so luong sinh vien: ";
    cin>>n;

    //Tao mang dong ds n doi tuong SinhVien de chua thong tin cua n sv
    SinhVien *ds = new SinhVien[n];

    //Nhap thong tin cua n sv vao n doi tuong
    cout<<"Nhap thong tin sinh vien:\n";
    for(int i=0;i<n;i++)
    {
	printf("Sinh vien thu %d:\n",i+1);
	ds[i].nhap();
	cout<<endl;
    }

    cout<<"\nDanh sach cac sinh vien da nhap la:\n";
    for(int i=0;i<n;i++)
    {
	printf("Sinh vien thu %d:\n",i+1);
	ds[i].hien();
	cout<<"\n\n";
    }

    cout<<"Tong so sinh vien da nhap la: "<<SinhVien::laySL(); //Goi ham cua lop

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void SinhVien::nhap()
{
    //Tao ma sinh vien tu dong
    maSV = ++stt;
    
    //Nhap ho ten va diem tbc
    cout<<"Ma sinh vien: "<<maSV<<endl;
    cout<<"Ho ten: ";scanf(" ");cin.get(hoTen,sizeof(hoTen));
    cout<<"Diem TBC: ";cin>>diemTBC;
}

void SinhVien::hien()
{
    cout<<"Ma sinh vien: "<<maSV;
    cout<<"\nHo ten: "<<hoTen;
    cout<<"\nDiem TBC: "<<diemTBC;
}

//Ham cua lop
int SinhVien::laySL()
{
    return stt-10;
}


//Ho Ten:Nguyen Van Luan
//MaSV: 5919870
//Lop:K59THA
/*Bài 29(lthdtbai29.cpp): Nhập vào một số nguyên dương, đưa ra số hex tương ứng.
Y/c trong chương trình có sử dụng ngăn xếp để chuyển từ số thập phân sang hex.
Ngăn xếp sử dụng cấu trúc lưu trữ phân tán.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop ngan xep
class Stack
{
    private:
	struct node
	{
	    char infor;
	    node *link;
	} *T;

    public:
	Stack(); //hàm tạo
	~Stack(); //Ham Huy
	void push(char x); //Bo sung 1 phan tu vao ngan xep
	char pop(); //Loai bo phan tu khoi ngan xep
	bool isEmpty(); //Kiem tra ngan xep rong
};

//===chuong trinh chinh===
int main()
{
    //Tao 1 doi tuong ngan xep
    Stack s;

    //Khai bao bien
    int n,thuong,du;

    cout<<"Nhap vao so nguyen duong he 10: ";
    cin>>n;

    //Chuyen sang he 16
    thuong=n;
    while(thuong)
    {
	du = thuong%16;
	thuong /= 16;

	//Chuyen so du thanh chu so he 16 roi day vao ngan xep
	if(du<10) s.push(du+48);
	else s.push(du+55);
    }
    
    //Dua ra so hex
    cout<<"So hex cua "<<n<<" la: ";
    while(!s.isEmpty()) cout<<s.pop();

    cout<<endl;
    return 0;
}
//==dinh nghia ham===
Stack::Stack():T(NULL)
{

}

Stack::~Stack()
{
    while(T)
    {
	node *P=T;
	T = T->link;
	delete P;
    }
}

void Stack::push(char x)
{
    //1.Tao nut moi chua x
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //2.Noi nut moi vao tren nut T
    N->link = T;

    //3.Cho T tro sang nut moi
    T = N;
}

char Stack::pop()
{
    //1.Kiem tra rong
    if(T==NULL)
    {
	cout<<"Ngan xep da rong!";
	return 1;
    }

    //2.Giu lai nut dinh
    node *P = T;
    char tg = T->infor;

    //3.Cho T tro xuong nut ben duoi
    T = T->link;

    //4.Huy nut dinh va tra ve phan tu nut dinh da loai bo
    delete P;
    return tg;
}

bool Stack::isEmpty()
{
    return T==NULL;
}


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


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPMP
//De:
/*
Tính tổng hai số phức.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop so phuc
class SoPhuc
{
    private:
	float a,b;

    public:
	void nhap();
	void hien();
	SoPhuc cong(const SoPhuc &p2);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc
    SoPhuc p1,p2,s;

    //Nhap vao 2 so phuc
    cout<<"Nhap so phuc p1:\n";
    p1.nhap();
    cout<<"Nhap so phuc p2:\n";
    p2.nhap();

    //Tinh tong
    s = p1.cong(p2);

    //Dua ra
    cout<<"p1 = ";p1.hien();
    cout<<"\np2 = ";p2.hien();
    cout<<"\np1 + p2 = ";s.hien();

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void SoPhuc::nhap()
{
    cout<<"Nhap vao phan thuc: "; cin>>a;
    cout<<"Nhap vao phan ao: "; cin>>b;
}

void SoPhuc::hien()
{
    if(b>=0) cout<<a<<" + j"<<b;
    else cout<<a<<" - j"<<-b;
}

SoPhuc SoPhuc::cong(const SoPhuc &p2)
{
    SoPhuc tong;

    tong.a = a + p2.a;
    tong.b = b + p2.b;

    return tong;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPMP
//De:
/*
Tính tổng hai số phức. Chong toan tu +.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop so phuc
class SoPhuc
{
    private:
	float a,b;

    public:
	SoPhuc operator+(const SoPhuc &p2);
	
	//Ham ban
	friend istream& operator>>(istream &cin,SoPhuc &p);
	friend ostream& operator<<(ostream &cout,SoPhuc &p);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc
    SoPhuc p1,p2,s;

    //Nhap vao 2 so phuc
    cout<<"Nhap so phuc p1:\n";
    cin>>p1; //Uoc gi co the dung cin>>p1;
    
    cout<<"Nhap so phuc p2:\n";
    cin>>p2; //Uoc gi co ther dung cin>>p2;

    //Tinh tong
    s = p1 + p2;

    //Dua ra
    cout<<"p1 = "<<p1; //Uoc gi co the dung cout<<p1;
    cout<<"\np2 = "<<p2;
    cout<<"\np1 + p2 = "<<s;

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
SoPhuc SoPhuc::operator+(const SoPhuc &p2)
{
    SoPhuc tong;

    tong.a = a + p2.a;
    tong.b = b + p2.b;

    return tong;
}

//Ham ban, ham thong thuong, khong nam trong doi tuong
istream& operator>>(istream &cin,SoPhuc &p)
{
    cout<<"Nhap vao phan thuc: "; cin>>p.a;
    cout<<"Nhap vao phan ao: "; cin>>p.b;

    return cin;
}

ostream& operator<<(ostream &cout,SoPhuc &p)
{
    if(p.b>=0) cout<<p.a<<" + j"<<p.b;
    else cout<<p.a<<" - j"<<-p.b;

    return cout;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPMP
//De:
/*
Tính tổng hai số phức. Chong toan tu +. Viet 3 ham tao va 1 ham huy.
- Ham tao khong doi so khoi tao a, b bang 0
- Ham tao 1 doi so khoi tao a bang doi so
- Ham tao 2 doi so khoi tao a, b bang doi so tuong ung
- Ham huy co than ham rong
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop so phuc
class SoPhuc
{
    private:
	float a,b;

    public:
	SoPhuc(); //Ham tao khong doi so
	SoPhuc(float x); //Ham tao 1 doi so
	SoPhuc(float x,float y); //Ham tao 2 doi so
	~SoPhuc(); //Ham huy
	SoPhuc operator+(const SoPhuc &p2);
	
	//Ham ban
	friend istream& operator>>(istream &cin,SoPhuc &p);
	friend ostream& operator<<(ostream &cout,SoPhuc &p);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc
    SoPhuc p1(2),p2(7,-5),s;

    /*
    //Nhap vao 2 so phuc
    cout<<"Nhap so phuc p1:\n";
    cin>>p1; //Uoc gi co the dung cin>>p1;
    
    cout<<"Nhap so phuc p2:\n";
    cin>>p2; //Uoc gi co ther dung cin>>p2;

    //Tinh tong
    s = p1 + p2;
    */
    //Dua ra
    cout<<"p1 = "<<p1; //Uoc gi co the dung cout<<p1;
    cout<<"\np2 = "<<p2;
    cout<<"\np1 + p2 = "<<s;
    

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
SoPhuc::SoPhuc():a(0),b(0)
{
    cout<<"\nHam tao khong doi so da thuc hien.";   
}

SoPhuc::SoPhuc(float x):a(x),b(0)
{
    cout<<"\nHam tao mot doi so da thuc hien.";
}

SoPhuc::SoPhuc(float x,float y):a(x),b(y)
{
    cout<<"\nHam tao hai doi so da thuc hien.";
}

SoPhuc::~SoPhuc()
{
    cout<<"\nHam huy da thuc hien.";
}

SoPhuc SoPhuc::operator+(const SoPhuc &p2)
{
    SoPhuc tong;

    tong.a = a + p2.a;
    tong.b = b + p2.b;

    return tong;
}

//Ham ban, ham thong thuong, khong nam trong doi tuong
istream& operator>>(istream &cin,SoPhuc &p)
{
    cout<<"Nhap vao phan thuc: "; cin>>p.a;
    cout<<"Nhap vao phan ao: "; cin>>p.b;

    return cin;
}

ostream& operator<<(ostream &cout,SoPhuc &p)
{
    if(p.b>=0) cout<<p.a<<" + j"<<p.b;
    else cout<<p.a<<" - j"<<-p.b;

    return cout;
}


//Ho ten: Le Tuan Tu
//MaSV: 623345
//Lop: K62CNPM
//De:
/*
Nhập vào một số nguyên dương, đưa ra xâu ký tự số hex tương ứng.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    unsigned n,thuong,du;
    char soHex[9]=" "; //khoi tao bang xau rong
    char chuSoHex[16][2]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};

    //Nhap so nguyen duong
    cout<<"Nhap vao 1 so nguyen duong: ";cin>>n;

    //Chuyen sang he hex
    thuong=n;
    while(thuong)
    {
	du = thuong%16;
	thuong/=16;

	//Chuyen so du thanh chu so hex roi noi vao xau soHex
	strcat(soHex,chuSoHex[du]);
    }

    //Dao xau de duoc so hex dung
    int length=strlen(soHex);
    char tg;

    for(int i=0;i<length/2;i++)
    {
	tg = soHex[i];
	soHex[i] = soHex[length-1-i];
	soHex[length-1-i] = tg;
    }

    //Dua ra kq
    cout<<"So hex cua "<<n<<" la: "<<soHex;

    cout<<endl;
    return 0;
}
//===dinh nghia ham===


