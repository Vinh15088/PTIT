#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream In;
    ofstream Out;

    In.open("main.cpp", ios_base::in);
    char c;
    int count = 0;
    while(In >> c){
        if(c != ' ' && c != '\n') count++;
    }

    Out.open("output.txt", ios_base::out);
    Out << count << endl;

    In.close();
    Out.close();
}