#include<stdio.h>
#include<stdbool.h>
int giaithua(int n);
bool check(int n)
{
	int temp,count,sum,temp2,store[10];
	temp=0;temp2=n;count=0;sum=0;
	while(temp2 != 0)
	{
		store[count++]=temp2 %10;
		temp2 /= 10;
	}
	for(int j=0;j<count;j++)
	{
		sum += giaithua(store[j]);
	}
	if(sum==n) return true;
	else return false;
}
int giaithua(int n)
{
	int multi=1;
	for(int i=n;i>0;i--)
	multi *=i;
	return multi;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(check(i)==true) printf("%d ",i);
	}
} 
