#include<bits/stdc++.h>
using namespace std;
 
void printBinStr(int* str, int Length){
    for (int i = 0; i < Length; i++) {
        cout << str[i];
    }
    cout << endl;
}

void generateBinStr(int* str, int Length, int currLength, int Count01, int nextbit){
    if (currLength == Length) {
        if (Count01 == 2 && nextbit == 0) printBinStr(str, Length);
        return;
    }
    if (currLength == 0) {
        str[0] = nextbit;
        generateBinStr(str, Length, currLength + 1, Count01, 0);
        generateBinStr(str, Length, currLength + 1, Count01, 1);
    }
    else {
        if (Count01 < 2) {
            str[currLength] = nextbit;
            if (str[currLength - 1] == 0 && nextbit == 1) Count01 += 1;
            generateBinStr(str, Length, currLength + 1, Count01, 0);
            generateBinStr(str, Length, currLength + 1, Count01, 1);
        }
        else {
            if (str[currLength - 1] == 0 && nextbit == 1) return;          
            else {
                str[currLength] = nextbit;
                generateBinStr(str, Length, currLength + 1, Count01, 0);
                generateBinStr(str, Length, currLength + 1, Count01, 1);
            }
        }
    }
}

int main(){ 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if (n < 4) cout << -1;
        else {
            int* str = new int[n];
            generateBinStr(str, n, 0, 0, 0);
            generateBinStr(str, n, 0, 0, 1);
        }
    }
    return 0;
}