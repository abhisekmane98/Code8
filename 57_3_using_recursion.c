#include<stdio.h>
void primefact(int);
int main()
{
	int i=2;
	int p;
	printf("Enter a number");
	scanf("%d",&p);
	primefact(p);
}

void primefact(int p)
{
	static int i=2;
	if(i<=p)
	{
		if(p%i==0)
		{
			p=p/i;
			printf("%d,",i);
		}
		else
			i++;
			
	primefact(p); 
	}
	
	
}

