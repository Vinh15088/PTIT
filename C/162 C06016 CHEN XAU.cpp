#include<stdio.h>
#include<string.h>
void check(char x[], char y[], int p)
{
	char result[50]="";
	for(int i=0;i<p-1;i++) result[i]=x[i];
	strcat(result,y);
	int lenXY= strlen(x)+ strlen(y);
	int lenY= strlen(y);
	for(int i=p-1+lenY;i<lenXY;i++)
	{
		result[i] = x[i-lenY];
	}
	puts(result);
}
int main()
{
	char x[50],y[50];
	int p;
	gets(x);
	gets(y);
	scanf("%d",&p);
	check(x,y,p);
	return 0;
}
