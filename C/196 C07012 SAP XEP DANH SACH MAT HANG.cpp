#include<stdio.h>

struct mathang
{
	int mamathang;
	char tenmathang[100], tennhomhang[100];
	double giamua,giaban,loinhuan;	
};

typedef struct mathang mathang;

int main()
{
	int t;
	scanf("%d",&t);
	mathang a[1000];
	for(int i=0;i<t;i++)
	{
		scanf("\n");
		gets(a[i].tenmathang);
		scanf("\n");
		gets(a[i].tennhomhang);
		scanf("%lf %lf", &a[i].giamua, &a[i].giaban);
		a[i].loinhuan = a[i].giaban - a[i].giamua;
		a[i].mamathang = i+1;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=i+1;j<t;j++)
		{
			if(a[i].loinhuan < a[j].loinhuan)
			{
				mathang tmp = a[i];
				a[i]= a[j];
				a[j]= tmp;
			}
		}
	}
	for(int i=0;i<t;i++)
	{
		printf("%d %s %s %.2lf\n",a[i].mamathang , a[i].tenmathang, a[i].tennhomhang, a[i].loinhuan );
	}
}
