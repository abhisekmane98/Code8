#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{		
		for(k=1;k<=5-i;k++)
		{
			printf("  ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*   "); //3 gaps 1 distinguish app for * , another 1 is real gap between * , 3rd one is distingish gap for 2nd real gap	
		}
		printf("\n");
		
	}
	
	i=i-2; // i=4;
	
	for(;i>=1;i--)
	{		
		for(k=1;k<=5-i;k++)
		{
			printf("  ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*   "); //3 gaps 1 distinguish app for * , another 1 is real gap between * , 3rd one is distingish gap for 2nd real gap	
		}
		printf("\n");
		
	}
	
	

}
