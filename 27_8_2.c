// move forward whole
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
			printf("     ");
			if(i%2!=0)
			{
				for(j=1;j<=5;j++)
				{
					printf("* ");
				}
				
				printf("\n");
			}
			else
			{
				printf(" ");
				for(j=1;j<=4;j++)
				{
					printf("* ");
				}
				
				printf("\n");	
			}
		
	}
}
