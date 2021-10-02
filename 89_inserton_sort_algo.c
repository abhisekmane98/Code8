// insertion sort algorithm
#include<stdio.h>
int main()
{
	int a[]={4,3,2,10,12,1,5,6};
	int i,j,t;

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
	}
	
	printf("\n");
	
	for(i=0;i<=7;i++)
	{
		printf("%d,",a[i]);
	}
	
	
}
