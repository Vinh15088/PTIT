#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class PhanSo {
private:
    int tu;
    int mau;
public:
    PhanSo(int tu = 0, int mau = 1);
    PhanSo operator+(const PhanSo &ps) const;
    PhanSo operator-(const PhanSo &ps) const;
    PhanSo operator*(const PhanSo &ps) const;
    PhanSo operator/(const PhanSo &ps) const;
    bool operator<(const PhanSo &ps) const;
    bool operator>(const PhanSo &ps) const;
    bool operator==(const PhanSo &ps) const;
    friend istream &operator>>(istream &in, PhanSo &ps);
    friend ostream &operator<<(ostream &out, const PhanSo &ps);
};

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
}

PhanSo PhanSo::operator+(const PhanSo &ps) const {
    int tuMoi = this->tu * ps.mau + this->mau * ps.tu;
    int mauMoi = this->mau * ps.mau;
    return PhanSo(tuMoi, mauMoi);
}

PhanSo PhanSo::operator-(const PhanSo &ps) const {
    int tuMoi = this->tu * ps.mau - this->mau * ps.tu;
    int mauMoi = this->mau * ps.mau;
    return PhanSo(tuMoi, mauMoi);
}

PhanSo PhanSo::operator*(const PhanSo &ps) const {
    int tuMoi = this->tu * ps.tu;
    int mauMoi = this->mau * ps.mau;
    return PhanSo(tuMoi, mauMoi);
}

PhanSo PhanSo::operator/(const PhanSo &ps) const {
    int tuMoi = this->tu * ps.mau;
    int mauMoi = this->mau * ps.tu;
    return PhanSo(tuMoi, mauMoi);
}

bool PhanSo::operator<(const PhanSo &ps) const {
    return (this->tu * ps.mau < ps.tu * this->mau);
}

bool PhanSo::operator>(const PhanSo &ps) const {
    return (this->tu * ps.mau > ps.tu * this->mau);
}

bool PhanSo::operator==(const PhanSo &ps) const {
    return (this->tu * ps.mau == ps.tu * this->mau);
}

istream &operator>>(istream &in, PhanSo &ps) {
    cout << "Nhap tu so: ";
    in >> ps.tu;
    cout << "Nhap mau so: ";
    in >> ps.mau;
    return in;
}

ostream &operator<<(ostream &out, const PhanSo &ps) {
    out << ps.tu << "/" << ps.mau;
    return out;
}

class DSPhanSo {
    private:
        vector<PhanSo> ds;
    public:
    void nhap();
    PhanSo tong() const;
    PhanSo max() const;
    PhanSo min() const;
    void sapXepTang();
    void sapXepGiam();
    void xuat() const;
};

void DSPhanSo::nhap() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    ds.reserve(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i+1 << endl;
        PhanSo ps;
        cin >> ps;
        ds.push_back(ps);
    }
}

PhanSo DSPhanSo::tong() const {
    return accumulate(ds.begin(), ds.end(), PhanSo(0, 1));
}

PhanSo DSPhanSo::max() const {
    return *max_element(ds.begin(), ds.end());
}

PhanSo DSPhanSo::min() const {
    return *min_element(ds.begin(), ds.end());
}

void DSPhanSo::sapXepTang() {
    for (int i = 0; i < ds.size() - 1; i++) {
        for (int j = i + 1; j < ds.size(); j++) {
            if (ds[i] > ds[j]) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

void DSPhanSo::sapXepGiam() {
    for (int i = 0; i < ds.size() - 1; i++) {
        for (int j = i + 1; j < ds.size(); j++) {
            if (ds[i] < ds[j]) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

void DSPhanSo::xuat() const {
    cout << "Danh sach phan so: ";
    for (int i = 0; i < ds.size(); i++) {
        cout << ds[i] << " ";
    }
    cout << endl;
}

int main() {
    DSPhanSo dsps;
    dsps.nhap();
    dsps.xuat();
    cout << "Tong cac phan so: " << dsps.tong() << endl;
    cout << "Phan so lon nhat: " << dsps.max() << endl;
    cout << "Phan so nho nhat: " << dsps.min() << endl;
    cout << "Danh sach phan so tang dan: ";
    dsps.sapXepTang();
    dsps.xuat();
    cout << "Danh sach phan so giam dan: ";
    dsps.sapXepGiam();
    dsps.xuat();
    return 0;
}