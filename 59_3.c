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

	if(p!=0)
	{
		r=p%2;
		p/=2;
		binary(p);
		printf("%d",r);
	}
	else
	;
}
