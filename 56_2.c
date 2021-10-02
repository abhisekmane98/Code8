#include<stdio.h>
int main()
{
	int p,r,s=0;
	printf("Enter a number");
	scanf("%d",&p);
	
	while(p!=0)
	{
		r=p%10;
		s=s+r;
		p=p/10;
	}
	printf("%d",s);
}
