#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int i,j;
        for( i=0,j=n-1; i<j; i++,j--){
            cout << a[j] << " " << a[i] << " ";
        }
        if(i==j) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}


#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
        int n; cin >> n; int a[n]; 
        for(int i=0;i<n;i++) cin >> a[i];  
        sort(a,a+n, greater<int>()); 
        int i,j; 
        for(i=0,j=n-1;i<j;i++,j--) { 
            cout << a[i] << " " << a[j] << " "; 
        } 
        if(i == j) cout << a[j] << " "; 
        cout << endl; 
    } 
}