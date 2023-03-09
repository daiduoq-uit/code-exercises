#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

struct PS
{
    int TS;
    int MS;
};

void NhapPS(PS &x)
{
    cout<<"Nhap tu so: ";
    cin>>x.TS;
    do
    {
        cout<<"Nhap Mau so: "; 
        cin>>x.MS;
        if(x.MS==0)
            cout<<"Nhap sai, yeu cau nhap lai mau so: ";
    }while(x.MS==0);
}

void XuatPS(PS x)
{
    cout<<x.TS<<"/"<<x.MS;
}

int UCLN(int a, int b)
{
    a=abs(a);
    b=abs(b);
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

void GutGon(PS &ps)
{
    int c=UCLN(ps.TS,ps.MS);
    ps.TS=ps.TS/c;
    ps.MS=ps.MS/c;
}   

PS TongPS(PS x, PS y)
{
    PS tong;
    tong.TS=x.TS*y.MS+x.MS*y.TS;
    tong.MS=x.MS*y.MS;
    GutGon(tong);
    return tong;
}

PS HieuPS(PS x, PS y)
{
    PS hieu;
    hieu.TS=x.TS*y.MS-x.MS*y.TS;
    hieu.MS=x.MS*y.MS;
    GutGon(hieu);
    return hieu;
}

PS TichPS(PS x, PS y)
{
    PS tich;
    tich.TS=x.TS*y.TS;
    tich.MS=x.MS*y.MS;
    GutGon(tich);
    return tich;
}

PS ThuongPS(PS x, PS y)
{
    PS thuong;
    thuong.TS = x.TS * y.MS;
    thuong.MS = x.MS * y.TS;
    GutGon(thuong);
    return thuong;
}

int main() 
{ 
    PS x, y;

    cout<<"Nhap phan so 1: ";
    NhapPS(x);
    cout<<"Nhap phan so 2: ";
    NhapPS(y);    
    cout<<"\nTong 2 phan so la: ";
    XuatPS(TongPS(x, y));
    cout<<"\nHieu 2 phan so la: ";
    XuatPS(HieuPS(x, y));
    cout<<"\nTich 2 phan so la: ";
    XuatPS(TichPS(x, y));
    cout<<"\nThuong 2 phan so la: ";
    XuatPS(ThuongPS(x, y));
    cout<<endl;
    
    return 0;
} 
