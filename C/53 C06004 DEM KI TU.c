#include<stdio.h>
#include<string.h>

void viethoa(char s[])
{
	int chu=0;
	int so=0;
	int khac=0;
	int i;
	for(i=0 ; s[i]!='\0' ; i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			chu++;
		}
		else if(s[i]>='0' && s[i]<='9') so++;
		else khac++;
	}
	printf("%d %d %d",chu,so,khac);
}

int main()
{
	char s[100];
    int i;
    gets(s);
    viethoa(s);
    return 0;
}
