#include<stdio.h>

#define MAX 1000000000

int CheckNotDown(int n){
    while(n > 0){
        if(n%10 < (n/10)%10) return 0;
        n /= 10;
    }
    return 1;
}
int CheckAppear(int thutu[], int pos, int number){
    for(int i = 0; i < pos; i++) 
        if(number == thutu[i]) return 0;
    return 1;
}
void Swap(int *a, int *b){
    int tempt = *a;
    *a = *b;
    *b = tempt;
}
int main(){
    int arr[100000];
    int size = 0;
    while(scanf("%d", &arr[size]) != EOF) size++;
    int thutu[100000];
    int pos = 0;
    int static solan[100000];
    for(int i = 0; i < size; i++){
        if(CheckNotDown(arr[i])){
            if(CheckAppear(thutu, pos, arr[i])){
                thutu[pos] = arr[i];
                solan[pos]++;
                pos++;
                // solan[pos]++;
            }else{
                for(int j = 0;j < pos; j++){
                    if(arr[i] == thutu[j]) {
                        solan[j]++;
                        break;
                    }
                }
            }
        }
    }
    for(int i = 0; i < pos; i++){
        for(int j = i+1; j < pos; j++){
            if(solan[j] > solan[i]){
                Swap(&solan[j], &solan[i]);
                Swap(&thutu[j], &thutu[i]);
            }
        }
    }
    for(int i = 0; i < pos; i++)
        printf("%d %d\n", thutu[i], solan[i]);
    
}
