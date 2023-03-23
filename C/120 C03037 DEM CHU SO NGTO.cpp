#include<stdio.h>
#include<math.h>
#include<string.h>

int IsPrime(int n)
{
    if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
    return 0;
}
int main()
{
    int check[18];
    for(int i = 0; i < 10; i++) check[i] = 1;
    int check2[18], m = 0;
    char s[19];
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
	{
        if(IsPrime(s[i]-48) && check[s[i] - 48])
		{
            check2[m] = s[i] - 48;
            m++;
            check[s[i] - 48] = 0;
        }
    }
    for(int i = 0; i < m; i++)
	{
        int count = 0;
        for(int j = 0;j < strlen(s); j++){
            if((check2[i] + 48) == s[j]) count++;
        }
        printf("%d %d\n", check2[i], count);
    }

}
