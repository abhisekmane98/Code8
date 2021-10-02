// i missed one diagonal this mistake is cured in 27_13_2.c
#include<stdio.h>
int main()
{
	int rows,i,j,k;
	printf("Enter a no. of Rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==1 || j==1 || i==rows || j==rows || i==j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
