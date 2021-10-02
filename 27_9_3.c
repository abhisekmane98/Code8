// i elimanate unnecessary space  after each star now
#include<stdio.h>
int main()
{
	int i,j,k,count=1;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		
		if(i==1)
			printf("*");
			
		if(i>=2 && i<=4)
			{
				printf("*");
				for(j=1;j<=count;j++)
				{	
					printf(" ");
				}	
				count+=2;
				printf("*");
        	}        
			
		if(i==5)
			for(j=1;j<=9;j++)
			{
				printf("*");
			}
		printf("\n");
	}
}
