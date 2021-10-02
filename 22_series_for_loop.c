#include<stdio.h>
#include<math.h>
int main()
{
	float x,i,s=0;
	printf("Enter the number");
	scanf("%f",&x);
	for(i=1;i<=7;i++)
	{
		if(i==1)
			s=s+(x-1/x);
		else
		{
			s=s+(1/2)*pow(x-1/x,i);
		}
	}
	
	printf("%f",s);
}
