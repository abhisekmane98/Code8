#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=8-i;j++)
		{
			printf("* ");
		}
		if(i==7)
			break;   // if we not write this if statement then no pb but to decrease time we are using this
		printf("\n");
		
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
	}
}
