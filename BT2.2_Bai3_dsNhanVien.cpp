#include <iostream>
#include <iomanip>

using namespace std;
#define MAX_EMPLOYEES 100

struct NhanVien {
    string maNV;
    string hoTen;
    string phongBan;
    int luongCoBan;
    int thuong;
    int thucLanh;
};

void nhapThongTinNhanVien(NhanVien& nv) {
    cout << "Nhap thong tin nhan vien:\n";
    cout << "Ma nhan vien (toi da 8 ky tu): ";
    getline(cin, nv.maNV);
    cout << "Ho ten (toi da 20 ky tu): ";
    getline(cin, nv.hoTen);
    cout << "Phong ban (toi da 10 ky tu): ";
    getline(cin, nv.phongBan);
    cout << "Luong co ban: ";
    cin >> nv.luongCoBan;
    cout << "Thuong: ";
    cin >> nv.thuong;
    cin.ignore();
    nv.thucLanh = nv.luongCoBan + nv.thuong;
}

void nhapDanhSachNhanVien(NhanVien ds[], int& n) {
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        nhapThongTinNhanVien(ds[i]);
    }
}

int ThucLanh(NhanVien ds[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i].thucLanh;
    }
    return tong;
}

void LuongThap(NhanVien ds[], int n) {
    int luongThapNhat = ds[0].luongCoBan;
    for (int i = 1; i < n; i++) {
        if (ds[i].luongCoBan < luongThapNhat) {
            luongThapNhat = ds[i].luongCoBan;
        }
    }
    cout << "Nhan vien co muc luong co ban thap nhat:\n";
    cout << setw(8) << "MaNV" << setw(20) << "Ho ten" << setw(20) << "Phong ban" << setw(20) << "Luong co ban" << setw(20) << "Thuong" << setw(20) << "Thuc lanh\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].luongCoBan == luongThapNhat) {
            cout << setw(8) << ds[i].maNV << setw(20) << ds[i].hoTen << setw(20) << ds[i].phongBan << setw(20) << ds[i].luongCoBan << setw(20) << ds[i].thuong << setw(20) << ds[i].thucLanh << endl;
        }
    }
}

int ThuongCao(NhanVien ds[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].thuong >= 1200000) {
            dem++;
        }
}
}
void sapXepNhanVien(NhanVien ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].phongBan > ds[j].phongBan ||
                (ds[i].phongBan == ds[j].phongBan && ds[i].maNV < ds[j].maNV)) {
                    swap(ds[i], ds[j]);
                    }
            }
        }
    cout << "Danh sach nhan vien theo phong ban:\n";
    cout <<"MaNV"<<setw(8)<<"Ho ten"<<setw(20)<<"Phong ban"<<setw(20)<<"Luong co ban"<<setw(20)<<"Thuong"<<setw(20)<<"Thuc lanh"<<endl;
    for (int i = 0; i < n; i++) {
        cout << ds[i].maNV <<setw(8)<< ds[i].hoTen <<setw(20)<<ds[i].phongBan <<setw(20)<< ds[i].luongCoBan <<setw(20)<< ds[i].thuong <<setw(20)<<ds[i].thucLanh << endl;
    }
}

int main() {
    NhanVien ds[MAX_EMPLOYEES];
    int n;
    nhapDanhSachNhanVien(ds, n);
    cout << "\nTong luong thuc nhan vien: " << ThucLanh(ds, n) << endl;

    LuongThap(ds, n);

    cout << "\nSo nhan vien co thuong cao hon 1.2 trieu dong: " << ThuongCao(ds, n) << endl;

    sapXepNhanVien(ds, n);

    return 0;
    }


