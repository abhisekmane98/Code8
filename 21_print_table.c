#include<stdio.h>
int main()
{
	int p,i;
	printf("Enter the number ");
	scanf("%d",&p);
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",p,i,p*i);	
	}
}
