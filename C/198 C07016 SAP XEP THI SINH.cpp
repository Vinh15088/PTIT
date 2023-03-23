#include<stdio.h>
struct sv{
	int id;
	char name[100], date[100];
	float a,b,c,sum;
};

int main()
{
	int n;
	scanf("%d\n",&n);
	struct sv s[n], temp;
	for(int i=0;i<n;i++)
	{
		s[i].id = i+1;
		gets(s[i].name);
		gets(s[i].date);
		if(i==n-1) scanf("%f %f %f",&s[i].a, &s[i].b, &s[i].c);
		else scanf("%f %f %f\n", &s[i].a, &s[i].b, &s[i].c);
		s[i].sum = s[i].a + s[i].b + s[i].c;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].sum < s[j].sum)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
			printf("%d %s %s %.1f\n",s[i].id, s[i].name, s[i].date, s[i].sum);
	}
	return 0;
}
