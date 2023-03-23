#include <stdio.h>
struct PhanSo {
	int tu;  int mau;
};
int ucln(int a, int b){
	while (a * b != 0){
		if (a > b) 
			a = a % b;
		else 
			b = b % a;
	}
	return a + b;
}
struct PhanSo rutGon(struct PhanSo ps){
	int uc = ucln(ps.tu, ps.mau);
	ps.tu /= uc;  ps.mau /= uc;
	return ps;
}
struct PhanSo cong(struct PhanSo p, struct PhanSo q) {
	struct PhanSo tong;
	tong.tu = p.tu * q.mau + q.tu * p.mau;
	tong.mau = p.mau * q.mau;
	tong = rutGon(tong);
	return tong;
}
struct PhanSo chia(struct PhanSo p, struct PhanSo q) 
{
	struct PhanSo thuong;
	thuong.tu = p.tu * q.mau;
	thuong.mau = p.mau * q.tu;
	thuong = rutGon(thuong);
	return thuong;
}
void hienThi(struct PhanSo ps) {
	printf("%d/%d\n", ps.tu, ps.mau);
}
int main () 
{
	int t;  scanf("%d", &t);   int i = 1;
	while (t--) {
		struct PhanSo p, q;
		scanf("%d", &p.tu);  scanf("%d", &p.mau);
		scanf("%d", &q.tu);  scanf("%d", &q.mau);
		struct PhanSo tong = cong(p, q);
		struct PhanSo thuong = chia(p, q);
		p = rutGon(p);
		q = rutGon(q);
		int bcnn = p.mau * q.mau / ucln(p.mau, q.mau);
		p.tu *= bcnn / p.mau;
		q.tu *= bcnn / q.mau;
		p.mau = bcnn;
		q.mau = bcnn;
		printf("Case #%d:\n", i);
		printf("%d/%d %d/%d\n", p.tu, p.mau, q.tu, q.mau);
		hienThi(tong);
		hienThi(thuong);
		i++;
	}
} 
