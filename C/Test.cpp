#include<bits/stdc++.h>
   
   using namespace std;
int tong(int n){
	int gt =1;
	for(int i=1;i<=n;i++){
		gt =gt*i;
	}
	return gt;
}
int main (){
	int test;
	cin>>test;
	while(test--){
		int a;
		float b;
		float t=0;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			t += pow(b,i)/tong(i);
		}
		cout << fixed << setprecision(3) << t << endl;
	}
}
