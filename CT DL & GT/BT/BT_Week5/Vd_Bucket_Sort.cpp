#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[], int n){
    int tmp;
    for(int i=1; i<n; i++){
        tmp = a[i];
        int j = i-1;
        while(j>=0 && a[j] > tmp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
    }
} 

void BucketSort(vector<double>& a, int buckets){
    // find min, max
    double Max = *max_element(a.begin(), a.end());
    double Min = *min_element(a.begin(), a.end());

    // range
    double range = (Max-Min)/ buckets;

    vector<vector<double>> tmp;

    // creat empty buckets
    for(int i=0; i<buckets; i++){
        tmp.push_back(vector<double>());
    }

    // dua cac phan tu mang vao bucket 
    for(int i=0; i<a.size(); i++){
        double BucketIndex = (a[i] - Min)/range;
        tmp.push_back
    }
}
int main(){
    int a[] = {11,9,21,8,17,19,13,1,24,12};
    
}