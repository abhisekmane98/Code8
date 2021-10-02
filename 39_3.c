#include<stdio.h>
void check_prime(int,int);
int main()
{
	int p,i;
	printf("Enter the positive integer");
	scanf("%d",&p);
	
	
	for(i=2;i<=p/2;i++) // i=2
	{
		if(p%i==0)
			check_prime(i,p);
		
	}
	
	
}

void check_prime(int i,int p) // int p
{
	int j,count=0,k;
	for(j=2;j<=i/2;j++)   // j=2 
	{
		if(i%j==0)
			break;	
	}
	
	if(j==i/2+1)
	{
		while(p%i==0)
		{
			count++;
			p=p/i;	
		}
		
		for(k=1;k<=count;k++)
		{
			printf("%d,",i);
		}
	}
}
