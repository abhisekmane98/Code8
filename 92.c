#include<stdio.h>
int main()
{
	int s[4][2]={
					{1234,56},
					{1212,33},
					{1434,80},
					{1312,78}
				};
				
	int i,j;
	int (*p)[2];
	int *q;
	for(i=0;i<=3;i++)
	{
		p=s+i; // &B[i]
		q=(int *)p;   // p is a pointer which points to array so by typecasting we made this deal 
		for(j=0;j<=1;j++)
		{
			printf("%d,",*(q+j));
		}
		printf("\n");
	}
}
