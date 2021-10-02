// addition of two matrix
#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	
	printf("Enter 6 Numbers of 1st matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter 6 Numbers of 2nd matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
