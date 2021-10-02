#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,count=1,sum=0;
	float i;
	printf("Enter a number");
	scanf("%d",&n);
	p=n;
	
	for(i=0;;i++)
	{
		n=n/10;
		if(n==0)
		 break;
		count++;
	}
	
	
	for(i=count-1;i>=0;i--)
	{
		sum=sum+(p%10)*pow(10.0,i);
		p=p/10;
	}
    printf("%d",sum);
}
