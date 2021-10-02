#include<stdio.h>
int binary(int);
int main()
{
	int p;
	printf("Enter a number");
	scanf("%d",&p);
	binary(p);
}

int binary(int p)
{
	int r;
	r=p%2;
	p/=2;
	if(p==0)
	{
		printf("%d",r);
			return 1000;
		
	}
	else
		binary(p);
		
	printf("%d",r);
	
}
