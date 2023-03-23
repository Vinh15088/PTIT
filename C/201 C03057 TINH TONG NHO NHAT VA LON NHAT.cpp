#include<stdio.h>
int main(){
	int n;  scanf("%d",&n);
	while(n--){
		long long a,b;  scanf("%lld %lld",&a,&b);
		long long i=a,j=b;
		long long c[100],d[100],e[100],f[100];  int s1=1,s2=1;
		while(a>0){
			int sd=a%10;
			if(sd==6){
				c[s1]=5;
				s1++;
			}
			else{
				c[s1]=sd;
				s1++;
			}
			a/=10;
		}
		s2=1;
		while(b>0){
			int sd=b%10;
			if(sd==6){
				d[s2]=5;
				s2++;
			}
			else{
				d[s2]=sd;
				s2++;
			}
			b/=10;
		}
		s1=1;
		while(i>0){
			int sd=i%10;
			if(sd==5){
				e[s1]=6;
				s1++;
			}
			else{
				e[s1]=sd;
				s1++;
			}
			i/=10;
		}
		s2=1;
		while(j>0){
			int sd=j%10;
			if(sd==5){
				f[s2]=6;
				s2++;
			}
			else{
				f[s2]=sd;
				s2++;
			}
			j/=10;
		}
		for(int k=s1-1;k>=1;k--){
			a=a*10+c[k];
			i=i*10+e[k];
		}
		for(int k=s2-1;k>=1;k--){
			b=b*10+d[k];
			j=j*10+f[k];
		}
		printf("%lld %lld\n",a+b,i+j);
	}
}
