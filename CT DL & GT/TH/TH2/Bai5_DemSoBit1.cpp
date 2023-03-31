#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N,L,R;

ll Length(int n){
	// Điều kiện dừng của đệ quy
	if(n==0 || n==1) return 1;
	// Gọi đệ quy đến các điểm chốt n%2
	ll tmp = Length(n/2);
	return 2*tmp + 1;
}

ll Count1(int n, ll l, ll r){
	// L,R bao trùm cả chiều dài của chuỗi bit do n tạo thành
	if(L<=l && r<=R) return n;
	// L,R không nằm trong khoảng
	if(R<l || r<L) return 0;
	ll m = (l+r)/2;
	if(L<=m && m<=R) return Count1(n/2, l, m-1) + Count1(n/2, m+1, r) + n%2; // tại những điểm chốt thì luôn có giá trị là n%2
	else return Count1(n/2, l, m-1) + Count1(n/2, m+1, r);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> N >> L >> R;
		ll res = Count1(N,1,Length(N));
		cout << res << endl;
	}
	return 0;
}