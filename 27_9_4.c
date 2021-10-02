#include<stdio.h>
int main()
{
	int rows,i,j,k,count=1;
	printf("Enter No. of Rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		printf("      ");   // moving forward triangles
		
		for(k=1;k<=rows-i;k++)
		{
			printf(" ");
		}
		
		if(i==1)
			printf("*");
			
		if(i>=2 && i<=rows-1)
			{
				printf("*");
				for(j=1;j<=count;j++)
				{	
					printf(" ");
				}	
				count+=2;
				printf("*");
        	}        
			
		if(i==rows)
			for(j=1;j<=2*rows-1;j++)    // 9*2+1=19
			{
				printf("*");
			}
		printf("\n");
	}
}
