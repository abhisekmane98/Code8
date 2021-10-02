#include<stdio.h>
int main()
{
	int b=0,c=1,t,i;
	
	for(i=1;i<=25;i++)
	{
		t=c;
		c=c+b;
		b=t;
		printf("%d,",c);
		
	}
	
}
