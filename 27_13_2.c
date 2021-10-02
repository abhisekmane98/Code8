// please check SS2 book
#include<stdio.h>
int main()
{
	int rows,i,j,k;
	printf("Enter a no. of Rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		printf("     ");
		for(j=1;j<=rows;j++)
		{
			if(i==1 || j==1 || i==rows || j==rows || i==j || i+j==1+rows)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
