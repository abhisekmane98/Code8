#include<stdio.h>
void check_prime(int);
int main()
{
	int p,i;
	printf("Enter the positive integer");
	scanf("%d",&p);
	
	for(i=1;i<=p/2;i++)
	{
		if(p%i==0)
			check_prime(i);
		
	}
}

void check_prime(int i)
{
	int j,count=0,k;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
			break;	
	}
	if(j==i/2+1)
	{
		while(p%i==0)
		{
			count++;	
		}
		
		for(k=1;k<=count;k++)
		{
			printf("%d,",i);
		}
	}
}
