#include<iostream>
using namespace std;
int main()
{
	int n,chan=0,le=0;
	cin >> n;
	for(int i=1;i<=3*n+1;i++)
	{
		if(i%2==0) chan += i;
		else le += i;
	}
	cout << le-chan;
	return 0;
}
