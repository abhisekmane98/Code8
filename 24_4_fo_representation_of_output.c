#include<stdio.h>
#include<math.h>
int main()
{
	float x10=100000,i,p;
	int k;    // to represent good answer
	for(i=9;i>=1;i--)
	{
		k=i;
		p=x10*pow(10.0/11.0,10-i);
		printf("X%d=%f\n",k,p);
	}
	
	
}
