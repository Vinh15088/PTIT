#include "stdio.h"
#include "conio.h"

typedef struct 
{
    int t; 
    int m;
} PHANSO;

int InPS(PHANSO ps);
int CongPS(PHANSO ps1, PHANSO ps2);
int TruPS(PHANSO ps1, PHANSO ps2);
int ChiaPS(PHANSO ps1, PHANSO ps2);
int SoSanh(PHANSO ps1, PHANSO ps2);
int USCLN(int a, int b);

int main(){
PHANSO ps1, ps2;
    ps1.t = 2;
    ps1.m = 4;
    ps2.t = 5;
    ps2.m = 10;

    printf("Phan so 1: ");
    InPS(ps1);
    printf("Phan so 2: ");
    InPS(ps2);

    printf("Tong hai phan so: ");
    CongPS(ps1, ps2);

    printf("Hieu hai phan so: ");
    TruPS(ps1, ps2);

    printf("Tich hai phan so: ");
    ChiaPS(ps1, ps2);

    printf("So sanh hai phan so: ");
    SoSanh(ps1, ps2);

    getch();
    return 0;
}

int InPS(PHANSO ps) {
    printf("%d/%d\n", ps.t, ps.m);
    return 0;
}

int CongPS(PHANSO ps1, PHANSO ps2) {
    PHANSO tong;
    tong.t = ps1.t * ps2.m + ps2.t * ps1.m;
    tong.m = ps1.m * ps2.m;
    int ucln = USCLN(tong.t, tong.m);
    tong.t /= ucln;
    tong.m /= ucln;
    InPS(tong);
   return 0;
}

int TruPS(PHANSO ps1, PHANSO ps2) {
    PHANSO hieu;
    hieu.t = ps1.t * ps2.m - ps2.t * ps1.m;
    hieu.m = ps1.m * ps2.m;
    int ucln = USCLN(hieu.t, hieu.m);
    hieu.t /= ucln;
    hieu.m /= ucln;
    InPS(hieu);
    return 0;
}

int ChiaPS(PHANSO ps1, PHANSO ps2) {
    PHANSO thuong;
    thuong.t = ps1.t * ps2.m;
    thuong.m = ps1.m * ps2.t;
    int ucln = USCLN(thuong.t, thuong.m);
    thuong.t /= ucln;
    thuong.m /= ucln;
    InPS(thuong);
    return 0;
}

int SoSanh(PHANSO ps1, PHANSO ps2) {
    PHANSO hieu;
    hieu.t = ps1.t * ps2.m - ps2.t * ps1.m;
    hieu.m = ps1.m * ps2.m;
    if (hieu.t > 0) {
        printf("%d/%d > %d/%d\n", ps1.t, ps1.m, ps2.t, ps2.m);
    } else if (hieu.t < 0) {
        printf("%d/%d < %d/%d\n", ps1.t, ps1.m, ps2.t, ps2.m);
    } else {
        printf("%d/%d = %d/%d\n", ps1.t, ps1.m, ps2.t, ps2.m);
    }
    return 0;
} 

int USCLN(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}