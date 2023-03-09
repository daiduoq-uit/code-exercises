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

int SoSanh(PS &x,PS &y)
{
    int a = abs(x.TS);
    int b = abs(x.MS);
    int c = abs(y.TS);
    int d = abs(y.MS);
    if ((float)(a/b) < (float)(c/d))
    {      
        return 1;
    }
        return 0;
}


 

int main()
{
    PS x,y;
	cout<<"Nhap Tu so cua phan so 1: "; 
    NhapPS(x);
	cout<<"Nhap Tu so cua phan so 2: "; 
    NhapPS(y);
	if(SoSanh(x,y)==1)
	{
		cout<<"Phan so 1 nho hon phan so 2";
	}
	else cout<<"Phan so 1 lon hon phan so 2";
    return 0;
}