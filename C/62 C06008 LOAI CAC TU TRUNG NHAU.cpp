#include<stdio.h>
#include<string.h>
int main() 
{
	char str[100], temp[100][100], *cut;
	int i;
	fgets(str, 100, stdin);
	cut = strtok(str, " ");
	i = 0;
	while (cut != NULL) {
		strcpy(temp[i], cut);
		cut = strtok(NULL, " \n");
		i++;
	}
	int count = i, j;
	for (i = 0; i < count - 1; i++) 
	{
		for(j = i + 1; j < count; j++)
		{
			if(strcmp(temp[i], temp[j]) == 0) 
			{
				int z;
				for (z = j; z < count; z++)
				{
					strcpy(temp[z], temp[z + 1]);
				}
				count--;
				j--;
			}
		}
	}
	for (i = 0; i < count; i++) 
	{
		printf("%s ", temp[i]);
	}
	return 0;
}
