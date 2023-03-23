#include<stdio.h>
int main ()
{
	int nam, tuan, ngay, n;
	scanf("%d",&n);
	nam=n/365;
	tuan=(n-(365*nam))/7;
	ngay=n-nam*365-tuan*7;
    printf("%d %d %d",nam,tuan ,ngay);
}
