#include<stdio.h>
#include<math.h>
int main()
{
	float x10=100000,i,p;
	for(i=9;i>=1;i--)
	{
		p=x10*pow(10.0/11.0,10-i);
		printf("x%f=%f\n",i,p);
	}
	
	
}
