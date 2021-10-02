#include<stdio.h>
int check_prime(int);
void factors(int,int);
int main()
{
	int p,i,r;
	printf("Enter the positive integer");
	scanf("%d",&p);
	
	
	for(i=2;i<=p/2;i++) 
	{
		if(p%i==0)
			r=check_prime(i);	
		if(r==1)
		{
			factors(i,p);	
		}
		
	}
	
	
}

int check_prime(int i) 
{
	int j,count=0,k;
	for(j=2;j<=i/2;j++)   
	{
		if(i%j==0)
			break;	
	}
	
	if(j==i/2+1)
		return(1);
	else 
		return(0);
}

void factors(int i,int p)
{
	int k,count=0;
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
