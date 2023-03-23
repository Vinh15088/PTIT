#include<stdio.h>
void insectionsort(int a[],int n)
{
	int k,j,p=0;
	 for (int i=1;i<n;i++)
	 {
	 	k=a[i];
	 	j=i-1;
	 	if(i==1)
		{
	 		printf("Buoc %d:",p);
	 		for(int k=0;k<=i-1;k++)
	 		{
				printf(" %d ",a[k]);
	 		}
	 		printf("\n");
	 		p++;
		}
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
		 	j--;
		}
		a[j+1]=k;
		printf("Buoc %d:",p);
	 	for(int k=0;k<=i;k++)
	 	{
	 		printf(" %d ",a[k]);
	 	}
		 printf("\n");
	 	p++;
	 }
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    insectionsort(a,n);
}
