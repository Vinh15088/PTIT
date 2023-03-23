#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s[55]={},res[55][55]={};
        gets(s);
        const char *delim = " ";
        char *p = strtok(s,delim);
        int idx=0;
        while(p!=NULL)
        {
            strcpy(res[idx++],p);
            p = strtok(NULL,delim);
        }
        strcat(res[idx-1],",");
        for(int i=1;i<idx;i++)
        {
            for(int j=0;j<strlen(res[i]);j++)
            {
                if(j==0) printf("%c",toupper(res[i][0]));
                else printf("%c",tolower(res[i][j]));
            }
            printf(" ");
        }
        for(int i=0;i<strlen(res[0]);i++) printf("%c",toupper(res[0][i]));
        printf("\n");
    }
    return 0;
}
