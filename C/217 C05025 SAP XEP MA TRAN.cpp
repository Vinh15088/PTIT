#include<stdio.h>
void nhap(int a[20][20],int n,int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
}
void in(int a[20][20],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
void sapxep(int a[20][20],int n,int m){
    int i1,i2,j1,j2,t;
    for(i1=0;i1<n;i1++){
        for(j1=0;j1<m;j1++){
            for(i2=i1;i2<n;i2++){
                for(j2=j1;j2<m;j2++){
                    if(a[i1][j1]>a[i2][j2])
					{
                        t = a[i1][j1];
                        a[i1][j1] = a[i2][j2];
                        a[i2][j2] = t;
                    }
                }
            }
        }
    }
}
void xuly(int a[20][20],int n,int m){
    sapxep(a,n,m);
    in(a,n,m);
    printf("\n");
}
main(){
    int a[20][20],n,m,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&n,&m);
        nhap(a,n,m);
        printf("Test %d:\n",i);
        xuly(a,n,m);
    }
}
