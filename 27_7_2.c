#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=20;i++)
	{
		printf("     ");
		for(k=1;k<=20-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
