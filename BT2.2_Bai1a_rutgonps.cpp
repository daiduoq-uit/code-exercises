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
	cout<<"Nhap Tu so: "; 
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

int main()
{
    PS x,y;
    NhapPS(x);
    GutGon(x);
    cout<<"Phan so sau khi rut gon: ";
    XuatPS(x);
    return 0;
}