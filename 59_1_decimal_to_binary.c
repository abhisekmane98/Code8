#include<stdio.h>
int main()
{
	int p,i=1,bin=0;
	printf("Enter a number");
	scanf("%d",&p);
	
	while(p!=0)
	{
		int r;
		r=p%2;
		bin=bin+r*i;
		p/=2;
		i*=10;	
	}
	printf("%d",bin);
	
	
	
}
