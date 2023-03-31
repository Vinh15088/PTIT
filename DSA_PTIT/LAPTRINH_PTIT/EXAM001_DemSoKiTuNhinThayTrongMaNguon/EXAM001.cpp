#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
   ifstream fileIn;
   ofstream fileOut;

   // mo fileIn
   fileIn.open("main.cpp", ios_base::in);
   char c;
   int count = 0;
   while(fileIn >> c){
        if(c !=' ') count++;
   }

   // mo fileOut
   fileOut.open("output.txt", ios_base::out);
   fileOut << count << endl;

   // dong file
   fileIn.close();
   fileOut.close();
}