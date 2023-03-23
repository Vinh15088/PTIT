#include<stdio.h>
void nhap(int a[],int n)
{
    for(int i=0 ; i<n ; i++)
        scanf("%d",&a[i]);
}
void tangdan(int a[],int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void giamdan(int a[],int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void ghep(int a[],int b[],int n)
{
    int c[2*n];
    for(int i=0 ; i<2*n ; i++ ){
        if(i%2==0){
            c[i]=a[i/2];
            printf("%d ",c[i]);
        }
        else {
            c[i]=b[i-(i+1)/2];
            printf("%d ",c[i]);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=1 ; i<=t ; i++){
        int a[100],b[100],n;  scanf("%d",&n);
        nhap(a,n);  nhap(b,n);
        printf("Test %d:",i);  printf("\n");
        tangdan(a,n);  giamdan(b,n);  ghep(a,b,n);
        printf("\n");
    }
}
