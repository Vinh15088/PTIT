// vd3
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v;
//     int n; cin >> n;
//     for(int i=1; i<=n; i++){
//         int x; cin >> x;
//         v.push_back(x);
//     }
//     // loai bo phan tu cuoi cung
//     v.pop_back();

//     // chen vao vi tri dau tien
//     v.insert(v.begin(), 5);

//     // bo xung gia tri 45 vao vi tri 2
//     v.insert(v.begin()+1,45);

//     // xoa vector v
//     v.clear();

//     return 0;
// }



// // vd4
// int main(){
//     int x[] = {1,2,3,4,5,6,7,8,9,10};
//     vector<int> a;
//     vector<int> b;
//     vector<int> c;
//     a.assign(x, x+10);
//     b.assign(5,10);
//     c.assign(x, x+7);
//     a.swap(b);
//     return 0;
// }



// vd5
// int main() {
//     int x[] = {1,2,3,4,5,6,7,8,9,10};
//     vector<int> a;
//     a.assign(x, x+10);
//     a.resize(6); // 1->6
//     a.resize(8,100); // 1->6 100 100
//     a.resize(12,0); // 1->6 100 100 0 0 0 0


// }


// danh sach: List
// int main() {
//     x[] = {1,2,3,4,5,6};
//     list<int> a;
//     list<int> b;
//     list<int> c;
//     list<int> d;
//     list<int> e;
//     list<int> f;

//     b.assign(4,100);
//     c.assign(4,100);
//     d.assign(x, x+6);
//     e.assign(x, x+6);
//     f.assign(4,100);

//     // new
//     a.assign(4,100);
//     b.assign(7, 55);
//     c.clear();
//     c.assign(x, x+3);
//     d.clear();
//     e.clear();
//     e.assign(4,100);
//     f.clear();
//     f.assign(x, x+6);
//     return 0;
// }

// vd2


//vd3 chen va xoa
int main() {
    list<int> ds1;
    for(int i=1; i<10; i++){
        ds1.push_back(i*10);
    }

    list<int>::iterator it1, it2;
    it1 = it2 = ds1.begin();
    advance (it2, 6);
    ++it1;

    it1 = ds1.erase(it1); // xoa 20

    it2 = ds1.erase(it2); // xoa 70

    ++it1; // tro den 40
    --it2; // tro den 60

    ds1.erase(it1,it2); // xoa tu 40
    return 0;
}