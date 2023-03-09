#include <iostream>
#include <string>

using namespace std;

struct HocSinh {
    string hoTen;
    float diemToan;
    float diemVan;
};

int main() {
    HocSinh hs;

    cout << "Nhap ho ten hoc sinh: ";
    getline(cin, hs.hoTen);

    cout << "Nhap diem Toan: ";
    cin >> hs.diemToan;

    cout << "Nhap diem Van: ";
    cin >> hs.diemVan;

    float diemTrungBinh = (hs.diemToan + hs.diemVan) / 2;
    cout << "Diem trung binh cua hoc sinh " << hs.hoTen << " la: " << diemTrungBinh << endl;

    return 0;
}
