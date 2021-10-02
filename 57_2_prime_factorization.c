#include<stdio.h>
int main()
{
	int i=2;
	int p;
	printf("Enter a number");
	scanf("%d",&p);
	
	while(i<=p)
	{
		if(p%i==0)
		{
			p=p/i;
			printf("%d,",i);
		}
		else
			i++;
	}
	
}

