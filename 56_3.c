#include<stdio.h>
int sum(int);
int main()
{ 
	int p,s;
	printf("Enter a number");
	scanf("%d",&p);
	s=sum(p);
	printf("%d",s);
}

int sum(int p)
{
	int s,r;
	
	r=p%10;
	p=p/10;
	if(p==0)
		return r;	
	s=r+sum(p);
	return s;
	
}
