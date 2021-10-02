// some error cured in 27_11_2.c
#include<stdio.h>
int main()
{
	int rows,i,j,k,l,p=1;
	printf("Enter No. of Rows");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		printf("      ");
		for(k=1;k<=rows-i;k++)
		{
			printf(" ");
		}
		if(i==1)
			printf("*");
		
		if(i>=2 && i<=rows)
		{
			printf("*");
			for(l=1;l<=p;l++)
			{
				printf(" ");		
			}
			p+=2;	
			printf("*");	
		}
		 printf("\n");
		
	}
	i=i-2;
	p-=2;
	
	for(;i>=1;i--)
	{
		printf("      ");
		
		for(k=1;k<=rows-i;k++)
		{
			printf(" ");
		}
		
		if(i<=rows-1 && i>=2)
		{
			printf("*");
			for(l=1;l<=p;l++)
			{
				printf(" ");		
			}
			p-=2;	
			printf("*");	
		}
		
		if(i==1)
			printf("*");
		
		printf("\n");
		
	}
	
	
}
