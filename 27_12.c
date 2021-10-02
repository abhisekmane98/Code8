// please go to SS book star pb 8)
// i am solving this by 1 way where user enter all rows
#include<stdio.h>
int main()
{
	int rows,i,j,k;
	printf("Enter No. of Rows and rows must be odd");
	scanf("%d",&rows);
	rows=(rows+1)/2; // redifining the rows
	
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	i-=2;
	for(;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
