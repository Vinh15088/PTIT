#include<stdio.h>
#include<stdbool.h>
bool asc(char a[])
{
	if(a[6]<a[7] && a[7]<a[8] && a[8]<a[10] && a[10]<a[11]) return true;
	return false;
}
bool chuso(char a[])
{
	bool check1=false, check2=false;
	if(a[6]==a[7] && a[7]==a[8]) check1 =true;
	if(a[10]==a[11]) check2=true;
	if(check1 && check2) return true;
	return false;
}
bool so68(char a[])
{
	if(a[6] != '6' && a[6] != '8') return false;
	if(a[7] != '6' && a[7] != '8') return false;
	if(a[8] != '6' && a[8] != '8') return false;
	if(a[10] != '6' && a[10] != '8') return false;
	if(a[11] != '6' && a[11] != '8') return false;
	return true;
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[20];
		gets(s);
		if(asc(s) || chuso(s) || so68(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
