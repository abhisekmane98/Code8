#include<stdio.h>
void fact(int);
int prime(int);
int main()
{
	int p;
	printf("Enter a number");
	scanf("%d",&p);
	fact(p);
}

void fact(int p)
{
	int i;
	for(i=1;i<=p/2;i++)
	{
		if(p%i==0)
			if(prime(i)==1)
				printf("%d,",i);

	}	
}

int prime(int i)   // check i is prime or not
{
	int j;
	if(i==1)
		return 0;
	if(i==2)
		return 1;
	else
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
				return 0;
		}	
		if(j==i/2+1)
			return 1;
	}
}






