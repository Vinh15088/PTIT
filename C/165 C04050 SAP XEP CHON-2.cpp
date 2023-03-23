#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
     int  temp=*a;
     *a=*b;
     *b=temp;
}
void selectionsort(int a[],int n)
{
	int p=1,min=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
	   for(int j=i+1;j<n;j++)
	   
	   	if(a[min]>a[j])
		   min=j;
	       swap(&a[min],&a[i]);
	      
	   for(int k=0;k<n;k++)
	   {
	      printf("%d ",a[k]);
	   }
	   printf("\n");
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
	  selectionsort(a,n);
}
