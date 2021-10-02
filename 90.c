// insertion sort algorithm
#include<stdio.h>
int main()
{
	int a[8];
	int i,j,k,t;
	printf("Enter 8 values in array a[]");
	for(i=0;i<=7;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<=6;i++)
	{	
		for(j=i;j>=0;j--)
		{	
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			else 
				break;		
		}
		
		printf("\n");
		
		for(k=0;k<=7;k++)
		{
			printf("%d,",a[k]);
		}
		
	}
	printf("\n");
	
	for(i=0;i<=7;i++)
	{
		printf("%d,",a[i]);
	}
	
	
}
