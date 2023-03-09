#include<iostream>
using namespace std;

bool NamNhuan(int nam)
{
    if(nam%4==0 && nam%100!=0 || nam%400==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void NgayTiepTheo(int &ngay, int &thang, int &nam)
{
    int A[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(NamNhuan(nam)==true)
    {
        A[1]=29;
    }

    ngay++;
    if(ngay>A[thang-1])
    {
        ngay=1;
        thang++;
        if(thang>12)
        {
            thang=1;
            nam++;
        }
    }
}

int main()
{
    int day, month, year;
    cout << "Nhap ngay (dd): ";
    cin >> day;
    cout << "Nhap thang (mm): ";
    cin >> month;
    cout << "Nhap nam (yyyy): ";
    cin >> year;

    NgayTiepTheo(day, month, year);

    cout << "Ngay ke tiep la: " << day << "/" << month << "/" << year << endl;

    return 0;
}