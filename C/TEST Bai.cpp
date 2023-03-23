#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b, kqua;
	int nho=0, result=0;
	while(a.length() > b.length()) b = '0' + b;
	while(a.length() < b.length()) a = '0' + a;
	for(int i= a.length()-1; i>=0; i--){
		result = (a[i] - 48) + (b[i] - 48) + nho;
		nho = result/10;
		kqua += result%10 + 48;		
	}
	if(nho != 0) kqua += nho + 48;
	for(int i= kqua.length()-1; i>=0; i++){
		cout << kqua[i] << endl;
	}
	return 0;
}
