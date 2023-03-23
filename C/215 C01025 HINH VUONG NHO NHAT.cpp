#include<stdio.h>
#include<math.h>
int max(int x1,int x2,int x3,int x4)
{
	int max1=x1;
	if(x2>max1) max1=x2;
	if(x3>max1) max1=x3;
	if(x4>max1) max1=x4;
	return max1;
}
int min(int x1, int x2, int x3, int x4)
{
	int min1=x1;
	if(x2<min1) min1=x2;
	if(x3<min1) min1=x3;
	if(x4<min1) min1=x4;
	return min1;
}
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d \n %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int canh1, canh2;
	canh1=abs(max(x1,x2,x3,x4)-min(x1,x2,x3,x4));
	canh2=abs(max(y1,y2,y3,y4)-min(y1,y2,y3,y4));
	printf("%d",(canh1>canh2) ? canh1*canh1 : canh2*canh2);
}
