#include<stdio.h>
int main()
{
	int y,i,m,d,c,L,x,v,l;
	printf("Enter the year upto 4 digit");
	scanf("%d",&y);
	m=y/1000;
	for(i=1;i<=m;i++)
	{
		printf("m");
	}
	y=y-m*1000;
	
	d=y/500;
	if(d==1)
		printf("d");
	y=y-d*500;
	
	c=y/100;
	for(i=1;i<=c;i++)
	{
		printf("c");
	}
	y=y-c*100;
	
	L=y/50;
	if(L==1)
		printf("l");
	y=y-L*50;
	
	x=y/10;
	for(i=1;i<=x;i++)
	{
		printf("x");
	}
	y=y-x*10;
	
	v=y/5;
    for(i=1;i<=v;i++)
	{
		printf("v");
	}
	y=y-v*5;
	
	for(i=1;i<=y;i++)
	{
		printf("l");
	}
}
