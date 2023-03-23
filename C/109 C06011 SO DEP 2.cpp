#include<stdio.h>
#include<string.h>
int SumDigit(char s[])
{
	int sum = 0;
	int l = strlen(s);
	for(int i = 0; i < l; i++ )
		sum += (int)s[i];
	sum -= 48*l;
	return sum;		
}
int Symmetry(char s[])
{
	int l = strlen(s);
	for (int i = 0; i <= l/2; i++)
		if(s[i] != s[l-i-1]) return 0;
	return 1;
}
int check(char s[])
{
	int check1 = 0;
	int check2 = 0;
	int check3 = 0;
	if(Symmetry(s)) check1 = 1;
	if(s[0] == '8' && s[strlen(s)-1] == '8') check2 = 1;
	if(SumDigit(s)%10 == 0) check3 = 1;
	return (check1 && check2 && check3);
}
int main()
{
	int t; scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		char s[501];
		scanf("%s", &s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
}
